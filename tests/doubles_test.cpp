#include <cassert>
#include <cstdlib>
#include "multiples-of-bytes-literals.hpp"

using namespace multiples_of_bytes_literals;

int main(int argc, char* argv[]) {
    assert((1_MiB+0.5_MiB) == 1.5_MiB);
    assert((1_MiB+0_MiB) == 1_MiB);
    assert((1_MiB*24) == 24_MiB);
    return EXIT_SUCCESS;
}
