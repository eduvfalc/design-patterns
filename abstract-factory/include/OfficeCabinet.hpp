#ifndef OFFICE_CABINET_HPP
#define OFFICE_CABINET_HPP

#include "ICabinet.hpp"
#include <iostream>

class OfficeCabinet : public ICabinet {
    public:
        OfficeCabinet() {
            std::cout << "Office cabinet created!" << std::endl;
        }
};

#endif