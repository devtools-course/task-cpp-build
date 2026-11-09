#include "deps.h"

int binary_log(n)
int n;
{
    int log = 0;

    while (1 << log < n) {
        log++;
    }

    return log;
}
