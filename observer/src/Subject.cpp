#include "Subject.hpp"
#include <chrono>
#include <algorithm>
#include <utility>
#include <memory>
#include <iostream>

Subject::Subject() {
    mIsRunning = true;
    mThread = std::thread(&Subject::Task, this);
}

Subject::~Subject() {
    mIsRunning = false;
    if(mThread.joinable()){
        mThread.join();
    }
}

void
Subject::Attach(const std::shared_ptr<IObserver>& observer) {
    mObservers.push_back(observer);
}

void
Subject::Detach(const std::shared_ptr<IObserver>& observer) {
    mObservers.erase(std::remove(mObservers.begin(), mObservers.end(), observer), mObservers.end());
}

void
Subject::Notify() {
    for(std::list<std::shared_ptr<IObserver>>::const_iterator it = mObservers.begin(); it != mObservers.end(); it++){
        (*it)->Update();
    }
}

void
Subject::Task() {
    while(mIsRunning) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        Notify();
    }
}