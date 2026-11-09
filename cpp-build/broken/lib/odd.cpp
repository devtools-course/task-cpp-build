#include "odd.hpp"

bool is_odd(int n) {
    if (n == 0) {
        return true;
    }

    if (n == 1) {
        return false;
    }

    return is_even(n - 1);
}
