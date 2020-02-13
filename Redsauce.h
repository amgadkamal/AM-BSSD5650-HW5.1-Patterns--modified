#ifndef Redsauce_h
#define Redsauce_h

#include "Pizza.h"
#include"ToppingDecorator.h"
class Redsauce : public ToppingDecorator {
public:
	Redsauce(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return 2 + tempPizza->getPrice(); };
	std::string getDescription() {
		return tempPizza->getDescription() + ",Redsauce";
	};
	~Redsauce() {};
};


#endif //