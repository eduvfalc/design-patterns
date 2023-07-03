#ifndef KITCHEN_FACTORY_HPP
#define KITCHEN_FACTORY_HPP

#include "IAbstractFactory.hpp"
#include "KitchenPantry.hpp"
#include "KitchenStoll.hpp"
#include "KitchenTable.hpp"
#include <iostream>

class KitchenFactory : public IAbstractFactory {
    public:
        KitchenFactory() {
            std::cout << "Kitchen factory created!" << std::endl;
        }

        std::shared_ptr<ICabinet> CreateCabinet() override {
            std::cout << "Creating kitchen cabinet..." << std::endl;
            return std::make_shared<KitchenPantry>();
        }

        std::shared_ptr<IChair> CreateChair() override {
            std::cout << "Creating kitchen stoll..." << std::endl;
            return std::make_shared<KitchenStoll>();
        }

        std::shared_ptr<ITable> CreateTable() override {
            std::cout << "Creating kitchen table..." << std::endl;
            return std::make_shared<KitchenTable>();
        }
};

#endif