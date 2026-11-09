//#include <iostream>

#include "even.hpp"
#include "odd.hpp"
#include "Goat.hpp"

int main() {
    int n;
    std::cin >> n;
    Goat g(is_odd(n));
    g.scream();

    return 0;
}
