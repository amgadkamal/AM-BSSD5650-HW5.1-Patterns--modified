#ifndef Sausage_h
#define Sausage_h

#include "Pizza.h"
#include"ToppingDecorator.h"
class Sausage : public ToppingDecorator {
public:
	Sausage(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return 8 + tempPizza->getPrice(); };
	std::string getDescription(){
		return tempPizza->getDescription() + ",sausage";
};
	 ~Sausage() {};
};




#endif //