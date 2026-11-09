#ifndef GOAT
#define GOAT

#include "Animal.hpp"
#include "screaming.hpp"

struct Goat : public Animal {
    Goat(bool dumb) : isDumb(dumb) {}

    void scream() override;

  private:
    bool isDumb;
};

#endif // GOAT
