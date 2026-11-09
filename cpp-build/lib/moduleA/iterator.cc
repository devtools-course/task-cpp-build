#include "iterator.hh"


bool devtools::iter::has_next() const {
    return this->pos < this->arr->size;
}

int devtools::iter::next() {
    return this->arr->vec[this->pos++];
}
