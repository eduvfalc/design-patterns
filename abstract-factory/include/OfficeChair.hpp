#ifndef OFFICE_CHAIR_HPP
#define OFFICE_CHAIR_HPP

#include "IChair.hpp"
#include <iostream>

class OfficeChair : public IChair {
    public:
        OfficeChair() {
            std::cout << "Office chair created!" << std::endl;
        }
};

#endif