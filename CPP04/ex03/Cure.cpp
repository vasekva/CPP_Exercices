#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	cout << BOLD << F_ORANGE << "[Cure 💊 ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
}

Cure::~Cure()
{
	cout << BOLD << F_ORANGE << "[Cure 💊 ] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Cure::Cure(const Cure &copyObject) :AMateria(copyObject)
{
	cout << BOLD << F_ORANGE << "[Cure 💊 ] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "called"
		 << endl;
}

Cure &Cure::operator=(const Cure &object)
{
	AMateria::operator=(object);
	return (*this);
}

AMateria* Cure::clone(void) const
{
	return ((new Cure()));
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << BRIGHT_BLUE << "* heals " << target.getName() << "’s wounds *" << NORM << std::endl;
}