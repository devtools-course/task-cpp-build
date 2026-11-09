#ifndef DT_CPP_BUILD_ITERATOR_HH
#define DT_CPP_BUILD_ITERATOR_HH
#include "array.hh"

namespace devtools {
    class iter {
        public:
        bool has_next() const;
        int next();

        explicit iter(array *arr) : arr(arr), pos(0) {}

        private:
        array *arr;
        int pos;
    };
}

#endif // DT_CPP_BUILD_ITERATOR_HH
