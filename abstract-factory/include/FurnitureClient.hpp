#ifndef FURNITURE_CLIENT_HPP
#define FURNITURE_CLIENT_HPP

#include "IAbstractFactory.hpp"
#include <iostream>
#include <memory>

class FurnitureClient {
    public:
        FurnitureClient() = delete;
        explicit FurnitureClient(std::shared_ptr<IAbstractFactory> factory) : mFactory(factory) {
            std::cout << "Furniture client created!" << std::endl;
        }

        void CreateFurniture() {
            mCabinet = std::move(mFactory->CreateCabinet());
            mChair = std::move(mFactory->CreateChair());
            mTable = std::move(mFactory->CreateTable());
        }

    private:
        std::shared_ptr<IAbstractFactory> mFactory;
        std::shared_ptr<ICabinet> mCabinet;
        std::shared_ptr<IChair> mChair;
        std::shared_ptr<ITable> mTable;
};

#endif