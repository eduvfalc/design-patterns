#include "Observer.hpp"
#include "Subject.hpp"
#include <memory>
#include <chrono>
#include <thread>

int main () {
    std::unique_ptr<ISubject> subject = std::make_unique<Subject>();
    std::shared_ptr<IObserver> observer_a = std::make_shared<Observer>();
    std::shared_ptr<IObserver> observer_b = std::make_shared<Observer>();

    subject->Attach(observer_a);
    subject->Attach(observer_b);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    subject->Detach(observer_a);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    subject->Detach(observer_b);

    return 0;
}