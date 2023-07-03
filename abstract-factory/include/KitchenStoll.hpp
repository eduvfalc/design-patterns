#ifndef KITCHEN_STOLL_HPP
#define KITCHEN_STOLLs_HPP

#include "IChair.hpp"
#include <iostream>

class KitchenStoll : public IChair {
    public:
        KitchenStoll() {
            std::cout << "Kitchen stoll created!" << std::endl;
        }
};

#endif