#ifndef KITCHEN_PANTRY_HPP
#define KITCHEN_PANTRY_HPP

#include "ICabinet.hpp"
#include <iostream>

class KitchenPantry : public ICabinet {
    public:
        KitchenPantry() {
            std::cout << "Kitchen pantry created!" << std::endl;
        }
};

#endif