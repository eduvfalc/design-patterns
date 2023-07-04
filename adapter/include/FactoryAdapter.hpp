#ifndef FURNITURE_ADAPTER_HPP
#define FURNITURE_ADAPTER_HPP

#include "IFurnitureFactory.hpp"
#include "AssemblingFactory.hpp"
#include <iostream>

class FactoryAdapter : public IFurnitureFactory {
    public:
        explicit FactoryAdapter(std::shared_ptr<IAssemblingFactory> factory) : mAssemblingFactory(factory) {
            std::cout << "Factory adapter created!" << std::endl;
        }
        std::shared_ptr<Furniture> BuildFurniture (Furniture furniture) override;

    private:
        std::shared_ptr<IAssemblingFactory> mAssemblingFactory;
        std::string FurnitureToString(Furniture furniture);
};

#endif