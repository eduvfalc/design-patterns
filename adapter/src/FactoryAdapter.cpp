#include "FactoryAdapter.hpp"
#include <iostream>

std::shared_ptr<Furniture>
FactoryAdapter::BuildFurniture(Furniture furniture){
    std::cout << "Building furniture " << FurnitureToString(furniture) << std::endl;
    if (Furniture::Desk == furniture) {
        std::cout << "Parts available. Forwarding request to assembling factory" << std::endl;
        return mAssemblingFactory->AssembleDesk();
    }
    else { 
        std::cout << "Parts unavailable. Building " << FurnitureToString(furniture) << " from scratch" << std::endl;
        return std::make_shared<Furniture>(furniture);
    }
}
 
std::string
FactoryAdapter::FurnitureToString(Furniture furniture){
    switch(furniture){
        case Furniture::Desk:
            return "desk";
        case Furniture::Cabinet:
            return "cabinet";
        case Furniture::Chair:
            return "chair";
        case Furniture::Table:
            return "table";
        default:
            return "";
    }
}