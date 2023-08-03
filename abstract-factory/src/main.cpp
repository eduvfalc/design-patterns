#include "FurnitureClient.hpp"
#include "KitchenFactory.hpp"
#include "OfficeFactory.hpp"

int main () {
    std::cout << "Requesting kitchen furniture..." << std::endl;
    std::shared_ptr<IAbstractFactory> kitchenFactory {std::make_shared<KitchenFactory>()};
    std::shared_ptr<FurnitureClient> kitchenFurnitureClient {std::make_shared<FurnitureClient>(kitchenFactory)};
    kitchenFurnitureClient->CreateFurniture();

    std::cout << "Requesting office furniture..." << std::endl;
    std::shared_ptr<IAbstractFactory> officeFactory {std::make_shared<OfficeFactory>()};
    std::shared_ptr<FurnitureClient> officeFurnitureClient {std::make_shared<FurnitureClient>(officeFactory)};
    officeFurnitureClient->CreateFurniture();

    return 0;
}