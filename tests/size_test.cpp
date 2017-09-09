#include "multiples-of-bytes-literals.hpp"
#include <cassert>
#include <cstdlib>

using namespace multiples_of_bytes_literals;

int main(int argc, char *argv[]) {
    assert((1L) == 1_B);
    assert((1L * 1024) == 1_KiB);
    assert((1L * 1024 * 1024) == 1_MiB);
    assert((1L * 1024 * 1024 * 1024) == 1_GiB);
    assert((1L * 1024 * 1024 * 1024 * 1024) == 1_TiB);
    return EXIT_SUCCESS;
}
