#ifndef PizzaFactory_h
#define PizzaFactory_h


#include "Pizza.h"
#include "ThinCrustPizza.h"
#include "ThickCrustPizza.h"
#include "StuffedCrustPizza.h"


class PizzaFactory {

public:
	enum PizzaType {
		ThinCrust,
		ThickCrust,
		StuffedCrust,
		top


	};
	


	static Pizza*createPizza(PizzaType pizzaType) {


		switch (pizzaType) {
		case ThinCrust:
			return new ThinCrustPizza();

		case ThickCrust:
			return new ThickCrustPizza();

		case StuffedCrust:
			return new StuffedCrustPizza();
	
		}
		throw "Invalid Pizza type";
	}


  
  };



#endif