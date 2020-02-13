#ifndef AddingTopping_h
#define AddingTopping_h


#include "Pizza.h"
#include "Caramel.h"
#include"Mushrooms.h"
#include"Onion.h"
#include"Redsauce.h"
#include"Sausage.h"
#include"PizzaFactory.h"



class AddingTopping{


public:
	enum DecoratorType {

		HWa,
		HWb,
		HWc

	};
	static Pizza* createPizz(DecoratorType DType) {


		switch (DType) {
		case HWb:
			return new Onion(new Onion(new Mushrooms(PizzaFactory::createPizza(PizzaFactory::PizzaType::StuffedCrust))));

		
		case HWc:
			return new Mushrooms(new Redsauce(new Redsauce(new Redsauce(PizzaFactory::createPizza(PizzaFactory::PizzaType::ThickCrust)))));


	

		case HWa:
			return new Onion(new Redsauce(PizzaFactory::createPizza(PizzaFactory::PizzaType::ThinCrust)));

		
	    }


		
	}
	
	


	


};



#endif