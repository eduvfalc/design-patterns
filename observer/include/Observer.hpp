#include "IObserver.hpp"

class Observer : public IObserver {
	public:
		Observer();
		void Update() override;

	private:
		static int mAvailableId;
		int mId;
};