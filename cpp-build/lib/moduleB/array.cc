#include "array.hh"
#include "iterator.hh"

#include <cstdlib>

bool devtools::array::invalid_idx(const int index) const {
    return index < 0 && index >= this->size;
}

int devtools::array::get(const int index) const {
    if (invalid_idx(index)) exit(1);
    return this->vec[index];
}

devtools::iter devtools::array::iterator() {
    return iter(this);
}

void devtools::array::put(int index, int value) {
    if (invalid_idx(index)) exit(1);

    this->vec[index] = value;
}
