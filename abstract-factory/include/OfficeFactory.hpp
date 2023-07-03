#ifndef OFFICE_FACTORY_HPP
#define OFFICE_FACTORY_HPP

#include "IAbstractFactory.hpp"
#include "OfficeCabinet.hpp"
#include "OfficeChair.hpp"
#include "OfficeDesk.hpp"
#include <iostream>

class OfficeFactory : public IAbstractFactory {
    public:
        OfficeFactory() {
            std::cout << "Office factory created!" << std::endl;
        }

        std::shared_ptr<ICabinet> CreateCabinet() override {
            std::cout << "Creating office cabinet..." << std::endl;
            return std::make_shared<OfficeCabinet>();
        }

        std::shared_ptr<IChair> CreateChair() override {
            std::cout << "Creating office chair..." << std::endl;
            return std::make_shared<OfficeChair>();
        }

        std::shared_ptr<ITable> CreateTable() override {
            std::cout << "Creating office table..." << std::endl;
            return std::make_shared<OfficeDesk>();
        }
};

#endif