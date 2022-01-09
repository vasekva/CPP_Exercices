#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap_Name")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << BOLD << BLUE << "[FragTrap]" << NORM;
	cout << BOLD << GREEN << "Default Constructor\t" << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

FragTrap::FragTrap(const string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << BOLD << BLUE << "[FragTrap]" << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

FragTrap::~FragTrap()
{
	cout << BOLD << BLUE << "[FragTrap]" << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		 << "of the object with name \""
		 << BRIGHT_BLUE << this->getName() << NORM
		 << "\"\tcalled"
		 << endl;
}

FragTrap::FragTrap(const FragTrap &copyObject)
{
	cout << BOLD << BLUE << "[FragTrap]" << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "of "
		 << URED << this->getName() << NORM
		 << " and "
		 << URED << copyObject.getName() << NORM
		 << " called"
		 << endl;
	*this = copyObject;
}

FragTrap	&FragTrap::operator=(const FragTrap &copyObject)
{
	if (this != &copyObject)
	{
		ClapTrap::operator=(copyObject);
	}
//	this->name = "copy_" + copyObject.getName();
//	this->hitPoints = copyObject.getHitPoint();
//	this->energyPoints = copyObject.getEnergyPoints();
//	this->attackDamage = copyObject.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	cout << BOLD << BLUE << "[FragTrap]" << NORM;
	cout << BRIGHT_BLUE << this->getName() << " " << UGREEN
		 << "Heeeeey! High five brooo!" << NORM
		 << endl;
}