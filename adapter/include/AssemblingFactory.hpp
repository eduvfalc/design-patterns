#ifndef ASSEMBLING_FACTORY_HPP
#define ASSEMBLING_FACTORY_HPP

#include "IAssemblingFactory.hpp"
#include <iostream>

class AssemblingFactory : public IAssemblingFactory {
    public:
        AssemblingFactory() {
            std::cout << "Assembling factory created!" << std::endl;
        }
        std::shared_ptr<Furniture> AssembleDesk() override;
};

#endif