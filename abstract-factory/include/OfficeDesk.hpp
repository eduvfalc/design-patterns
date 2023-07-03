#ifndef OFFICE_DESK_HPP
#define OFFICE_DESK_HPP

#include "ITable.hpp"
#include <iostream>

class OfficeDesk : public ITable {
    public:
        OfficeDesk() {
            std::cout << "Office desk created!" << std::endl;
        }
};

#endif