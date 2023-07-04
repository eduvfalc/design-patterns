#include "AssemblingFactory.hpp"
#include <iostream>

std::shared_ptr<Furniture>
AssemblingFactory::AssembleDesk(){
    std::cout << "Assembling desk..." << std::endl;
    return std::make_shared<Furniture>(Furniture::Desk);
}