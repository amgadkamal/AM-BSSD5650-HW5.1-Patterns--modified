#ifndef Caramel_h
#define Caramel_h

#include "Pizza.h"
#include"ToppingDecorator.h"
class Caramel : public ToppingDecorator {
public:
	Caramel(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return 8 + tempPizza->getPrice(); };
	std::string getDescription() {
		return tempPizza->getDescription() + ",caramel";
	};
	~Caramel() {};
};


#endif //