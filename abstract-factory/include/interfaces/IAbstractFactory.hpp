#ifndef IABSTRACT_FACTORY_HPP
#define IABSTRACT_FACTORY_HPP

#include "ICabinet.hpp"
#include "IChair.hpp"
#include "ITable.hpp"
#include <iostream>
#include <memory>

class IAbstractFactory {
    public:
        virtual ~IAbstractFactory() = default;
        virtual std::shared_ptr<ICabinet> CreateCabinet() = 0;
        virtual std::shared_ptr<IChair> CreateChair() = 0;
        virtual std::shared_ptr<ITable> CreateTable() = 0;
};

#endif