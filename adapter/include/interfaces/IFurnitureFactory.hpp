#ifndef IFURNITURE_FACTORY_HPP
#define IFURNITURE_FACTORY_HPP

#include <memory>

enum class Furniture {Chair, Table, Desk, Cabinet};

class IFurnitureFactory {
    public:
        virtual ~IFurnitureFactory() {};
        virtual std::shared_ptr<Furniture> BuildFurniture(Furniture furniture) = 0;
};

#endif