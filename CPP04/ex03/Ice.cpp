#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	cout << BOLD << BRIGHT_BLUE << "[Ice 🥶 ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
}

Ice::~Ice()
{
	cout << BOLD << BRIGHT_BLUE << "[Ice 🥶 ] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Ice::Ice(const Ice &copyObject) : AMateria(copyObject)
{
	cout << BOLD << BRIGHT_BLUE << "[Ice 🥶 ] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "called"
		 << endl;
}

Ice &Ice::operator=(const Ice &object)
{
	AMateria::operator=(object);
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return ((AMateria*)(new Ice()));
}

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	cout << BRIGHT_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << NORM << endl;
}