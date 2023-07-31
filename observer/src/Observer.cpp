#include "Observer.hpp"
#include <iostream>

int Observer::mAvailableId = 1;

Observer::Observer() {
    mId = mAvailableId;
    mAvailableId++;
}

void
Observer::Update() {
    std::cout << "Observer " << mId << " receiving update from subject" << std::endl;
}