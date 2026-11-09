#include "deps.hh"
#include <iostream>
#include <format>


int main(int argc, char **argv) {
    std::cout << std::format("{} {}", calc(3), "qwerty") << std::endl;
}
