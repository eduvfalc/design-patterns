#ifndef KITCHEN_TABLE_HPP
#define KITCHEN_TABLE_HPP

#include "ITable.hpp"
#include <iostream>

class KitchenTable : public ITable {
    public:
        KitchenTable() {
            std::cout << "Kitchen table created!" << std::endl;
        }
};

#endif