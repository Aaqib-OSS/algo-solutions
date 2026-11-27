#include <cassert>

#define main solution_main
#include "../../solutions/cpp/practice6.cpp"
#undef main

int main() {
    assert(search({4, 5, 6, 7, 0, 1, 2}, 0) == 4);
    assert(search({4, 5, 6, 7, 0, 1, 2}, 3) == -1);
    assert(search({1}, 0) == -1);
    assert(search({1}, 1) == 0);
    assert(search({3, 1}, 1) == 1);
    assert(search({3, 1}, 3) == 0);
    assert(search({5, 1, 3}, 5) == 0);
    assert(search({5, 1, 3}, 3) == 2);
    assert(search({1, 2, 3, 4, 5}, 4) == 3);
    assert(search({6, 7, 0, 1, 2, 4, 5}, 0) == 2);
    return 0;
}
