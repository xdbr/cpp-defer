cpp-defer
=========

defer action to end of scope (C++11 only / header-only)

Description
----------- 

Header-only library to defer actions to end of scope (with test)

Examples
--------

    #include "defer.hpp"

    #include <cassert>
    #include <fstream>

    auto main() -> int { // C++11 only.

        std::ofstream out("testfile", std::ios::out);

        {
            util::defer( [&]{ out.close(); });
        }

        assert(!out.is_open());
    }

Usage
-----

* `include` the header file
* Compile your executable/library with `-std=c++11`
    * (for now, this is a C++11-only header, and availability of C++11 is not checked)

License
-------

WTFPL
