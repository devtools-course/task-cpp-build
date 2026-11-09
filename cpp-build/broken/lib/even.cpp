#include "even.hpp"

bool is_even(int n) {
    if (n == 1) {
        return true;
    }

    if (n == 0) {
        return false;
    }

    return is_odd(n - 1);
}
