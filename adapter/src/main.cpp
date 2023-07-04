#include "FactoryAdapter.hpp"
#include <iostream>
#include <memory>

int main () {
    std::cout << "Requesting furniture production..." << std::endl;
    std::shared_ptr<IFurnitureFactory> factoryAdapter = std::make_shared<FactoryAdapter>(std::make_shared<AssemblingFactory>());
    factoryAdapter->BuildFurniture(Furniture::Cabinet);
    factoryAdapter->BuildFurniture(Furniture::Chair);
    factoryAdapter->BuildFurniture(Furniture::Desk);
    factoryAdapter->BuildFurniture(Furniture::Table);
    return 0;
}