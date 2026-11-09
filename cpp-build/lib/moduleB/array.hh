#ifndef DT_CPP_BUILD_ARRAY_HH
#define DT_CPP_BUILD_ARRAY_HH

#include <vector>

namespace devtools {
    class iter;

    class array {
        friend class iter;

        public:
        void put(int index, int value);
        int get(int index) const;
        iter iterator();

        explicit array(const int size) :
            vec(::std::vector<int>(size, 0)),
            size(size)
        {}

        private:
        ::std::vector<int> vec;
        int size;

        bool invalid_idx(int index) const;
    };
}

#endif // DT_CPP_BUILD_ARRAY_HH
