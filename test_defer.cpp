/*

    test_defer.cpp

    test file for defer.hpp
*/

#include "defer.hpp"

#include <cassert>
#include <fstream>

auto main() -> int {

    std::ofstream out("testfile", std::ios::out);

    {
        util::defer( [&]{ out.close(); });
    }

    assert(!out.is_open());

    return 0;
}