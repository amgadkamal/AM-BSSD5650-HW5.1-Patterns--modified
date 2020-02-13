#ifndef AddingTopping_h
#define AddingTopping_h


#include "Pizza.h"
#include "Caramel.h"
#include"Mushrooms.h"
#include"Onion.h"
#include"Redsauce.h"
#include"Sausage.h"

class AddingTopping{

public:

	enum DecoratorType {

		caramel

	};


	
	static Pizza* createPizzaa(DecoratorType dType)
	{

		switch (dType) {
		case caramel:
			return new Onion();

		}

		throw "Invalid Pizza type";
	}


};



#endif