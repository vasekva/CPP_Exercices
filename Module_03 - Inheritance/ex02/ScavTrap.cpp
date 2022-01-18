#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap_Name")
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->goodMode = false;
	cout << BOLD << YELLOW << "[ScavTrap]" << NORM;
	cout << BOLD << GREEN << "Default Constructor\t" << NORM
		<< "of an object with name "
		<< BRIGHT_BLUE << this->name << NORM
		<< " called"
		<< endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->goodMode = false;
	cout << BOLD << YELLOW << "[ScavTrap]" << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		<< "of an object with name "
		<< BRIGHT_BLUE << this->name << NORM
		<< " called"
		<< endl;
}

ScavTrap::~ScavTrap()
{
	cout << BOLD << YELLOW << "[ScavTrap]" << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		<< "of the object with name \""
		<< BRIGHT_BLUE << this->name << NORM
		<< "\"\tcalled"
		<< endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyObject)
{
	cout << BOLD << YELLOW << "[ScavTrap]" << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		<< "of an object "
		<< URED << this << NORM
		<< " and "
		<< URED << &copyObject << NORM
		<< " called"
		<< endl;
	*this = copyObject;
}

string	ScavTrap::getName() const { return (this->name); }
int		ScavTrap::getHitPoint() const { return (this->hitPoints); }
int		ScavTrap::getEnergyPoints() const { return (this->energyPoints); }
int		ScavTrap::getAttackDamage() const { return (this->attackDamage); }

ScavTrap	&ScavTrap::operator=(const ScavTrap &copyObject)
{
	if (this != &copyObject)
	{
		ClapTrap::operator=(copyObject);
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	cout << BOLD << YELLOW << "[ScavTrap]" << NORM;
	cout << "ScavTrap " << BRIGHT_BLUE << this->getName() << NORM
		<< " have entered in Gate keeper mode and"
		<< BOLD << RED << " BECAME A GOD FOR A MOMENT! BEWARE! "  << NORM
		<< endl;
	this->goodMode = true;
}
