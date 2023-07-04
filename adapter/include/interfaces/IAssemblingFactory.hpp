#ifndef IASSEMBLING_FACTORY_HPP
#define IASSEMBLING_FACTORY_HPP

#include "IFurnitureFactory.hpp"

class IAssemblingFactory {
    public:
        virtual ~IAssemblingFactory() {};
        virtual std::shared_ptr<Furniture> AssembleDesk() = 0;
};

#endif