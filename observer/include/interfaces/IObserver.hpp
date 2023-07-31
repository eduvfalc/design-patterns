#ifndef I_OBSERVER_HPP
#define I_OBSERVER_HPP

class IObserver {
    public:
        virtual ~IObserver() = default;
        virtual void Update() = 0;
};

#endif