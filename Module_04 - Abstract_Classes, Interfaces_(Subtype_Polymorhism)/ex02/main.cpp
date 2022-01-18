#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iomanip>


int	main(void)
{
	cout << endl;
	cout << "========================================================\n";
	cout << "==                  Constructors                      ==\n";
	cout << "========================================================\n";

		Animal *animal[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 6)
			{
				animal[i] = new Dog();
			}
			else
				animal[i] = new Cat();
		}
	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";
		for (int i = 0; i < 10; i++)
		{
			delete animal[i];
		}
	cout << "========================================================\n";

		Dog chuppy;
		Dog reks;
		Brain   *brain = chuppy.getAttribute();
	cout << "========================================================\n";

		brain->setIdea(1, "I want a bone! 🍖");
		brain->setIdea(1, "Ooooh, this ball is so nice!! ⚽️");

		cout << YELLOW << "["
			<< chuppy.getType() << "] " << UGREEN
			<< chuppy.getAttribute()->getIdea(1) << NORM
			<< endl;
		cout << YELLOW << "["
			<< reks.getType() << "] " << UGREEN
			<< reks.getAttribute()->getIdea(1) << NORM
			<< endl;

		cout << BRIGHT_BLUE << "Copy...." << NORM << endl;
		reks = chuppy;

		cout << YELLOW << "["
			<< chuppy.getType() << "] " << UGREEN
			<< chuppy.getAttribute()->getIdea(1) << NORM
			<< endl;
		cout << YELLOW << "["
			<< reks.getType() << "] " << UGREEN
			<< reks.getAttribute()->getIdea(1) << NORM
			<< endl;
		cout << BLUE "Adress *_brain Dog: " NORM << reks.getAttribute()
			<< endl
			<< PURPLE "Adress *_brain copyDog: " << NORM
			<< chuppy.getAttribute() << endl;

//	Animal wtf;

	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";

	return (0);
}