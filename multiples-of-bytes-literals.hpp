#pragma once

#include <cstddef>

constexpr std::size_t operator"" _B(unsigned long long value) {
    return value;
}

constexpr std::size_t operator"" _KiB(unsigned long long value) {
    return value * 1024_B ;
}

constexpr std::size_t operator"" _MiB(unsigned long long value) {
    return value * 1024_KiB;
}

constexpr std::size_t operator"" _GiB(unsigned long long value) {
    return value * 1024_MiB;
}

constexpr std::size_t operator"" _TiB(unsigned long long value) {
    return value * 1024_GiB;
}
