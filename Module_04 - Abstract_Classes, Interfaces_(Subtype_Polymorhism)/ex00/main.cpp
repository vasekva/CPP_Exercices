#include "Animal.hpp"
#include "W_Animal.hpp"
#include "W_Cat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	cout << endl;
	cout << "========================================================\n";
	cout << "==                  Constructors                      ==\n";
	cout << "========================================================\n";

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

	cout << "========================================================\n";

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";

		delete meta;
		delete j;
		delete i;

	cout << "=======================================================\n";
	cout << "==                      WRONG                        ==\n";
	cout << "=======================================================\n";

		const W_Animal* w_meta = new W_Animal();
		const W_Animal* w_i = new W_Cat();

	cout << "========================================================\n";

		std::cout << w_i->getType() << " " << std::endl;
		w_i->makeSound(); //will output the cat sound!
		w_meta->makeSound();

	cout << "========================================================\n";
	cout << "==                WRONG'S Destructors                 ==\n";
	cout << "========================================================\n";

		delete w_meta;
		delete w_i;

	return (0);
}