#ifndef DEFER_HPP
#define DEFER_HPP

/*

    defer.hpp

    defer actions to end of scope (C++11 only)
*/

#include <functional>

namespace util {
    
// inspired by:
// http://www.boost.org/doc/libs/1_53_0/libs/scope_exit/doc/html/scope_exit/alternatives.html
// C++11 only.

struct defer {
    defer(std::function<void (void)> f) : f_(f) {}
    ~defer(void) { f_(); }
private:
    std::function<void (void)> f_;
};

} /* end of namespace util */

#endif /* end of include guard: DEFER_HPP */
