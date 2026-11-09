#include <iostream>
#include "deps.h"

extern int question();

int main() {
    std::cout << question() << std::endl;
    std::cout << binary_log(65536) << std::endl;
}
