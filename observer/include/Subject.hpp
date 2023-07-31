#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "ISubject.hpp"
#include <list>
#include <thread>
#include <atomic>

class Subject : public ISubject {
    public:
        Subject();
        ~Subject();
        void Attach(const std::shared_ptr<IObserver>& observer) override;
        void Detach(const std::shared_ptr<IObserver>& observer) override;
        void Notify() override;

    private:
        void Task();
        std::thread mThread;
        std::atomic<bool> mIsRunning;
        std::list<std::shared_ptr<IObserver>> mObservers;          
};

#endif