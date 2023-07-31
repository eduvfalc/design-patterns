#ifndef I_SUBJECT_HPP
#define I_SUBJECT_HPP

#include "IObserver.hpp"
#include <memory>

class ISubject {
    public:
        virtual ~ISubject() = default;
        virtual void Attach(const std::shared_ptr<IObserver>& observer) = 0;
        virtual void Detach(const std::shared_ptr<IObserver>& observer) = 0;
        virtual void Notify() = 0;
};

#endif