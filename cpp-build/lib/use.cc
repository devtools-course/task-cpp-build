#include <iostream>
#include <ostream>

#include "iterator.hh"
#include "array.hh"

int main() {
    devtools::array arr(3);
    arr.put(0, 3);
    arr.put(1, 2);
    arr.put(2, 1);

    auto it = arr.iterator();
    while (it.has_next()) {
        std::cout << it.next() << std::endl;
    }
}
