#include <iostream>
#include"PizzaFactory.h"
#include"AddingTopping.h"
void pizzaInformation(Pizza*&pizza)
	{
	
	std::cout << pizza->getDescription() << std::endl;
	std::cout << pizza->getPrice() << std::endl;
	
    pizza = AddingTopping::createPizz(AddingTopping::DecoratorType::HWb);
	std::cout << pizza->getDescription() << std::endl;
	std::cout << pizza->getPrice() << std::endl;


	pizza = AddingTopping::createPizz(AddingTopping::DecoratorType::HWc);
	std::cout << pizza->getDescription() << std::endl;
	std::cout << pizza->getPrice() << std::endl;

	

	}

	int main(int argc, const char* argv[]) {
		
		Pizza* pizza = AddingTopping::createPizz(AddingTopping::DecoratorType::HWa);
		pizzaInformation(pizza);
		
		return 0;
		



	}
