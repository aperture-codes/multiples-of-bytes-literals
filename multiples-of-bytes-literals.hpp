#pragma once

#include <cstddef>
#include <cmath>

namespace multiples_of_bytes_literals {

namespace details {
    constexpr std::size_t power_of_1024(unsigned char exponent) {
        return 1 << 10*exponent;
    }

    constexpr std::size_t bytes(unsigned long long value,unsigned char exponent) {
        return value*power_of_1024(exponent);
    }

    constexpr std::size_t bytes(long double value,unsigned char exponent) {
        return value*power_of_1024(exponent);
    }
}

using namespace details;

#define define_literal(name, exponent) \
    constexpr std::size_t operator"" _##name(unsigned long long value) { return bytes(value, exponent); }\
    constexpr std::size_t operator"" _##name(long double value) { return bytes(value, exponent); }

define_literal(B, 0)
define_literal(KiB, 1)
define_literal(MiB, 2)
define_literal(GiB, 3)
define_literal(TiB, 4)

#undef define_literal

}
