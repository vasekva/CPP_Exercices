#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap_Name")
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->goodMode = false;
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BOLD << GREEN << "Def.Constructor\t" << NORM
		<< BRIGHT_BLUE << this->getName() << NORM
		<< " called"
		<< endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->goodMode = false;
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		<< BRIGHT_BLUE << this->getName() << NORM
		<< " called"
		<< endl;
}

ScavTrap::~ScavTrap()
{
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		<< BRIGHT_BLUE << this->getName() << NORM
		<< "\tcalled"
		<< endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyObject)
{
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
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

void ScavTrap::attack(const string &target)
{
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BRIGHT_BLUE << this->getName() << NORM
		<< RED << " attack " << BRIGHT_BLUE << target << NORM ", "
		<< "causing " << URED << this->getAttackDamage() << NORM
		<< " points of damage!"
		<< endl;
}

void	ScavTrap::guardGate()
{
	cout << BOLD << YELLOW << "[ScavTrap] " << NORM;
	cout << BRIGHT_BLUE << this->getName() << NORM
		<< " have entered in Gate keeper mode and"
		<< BOLD << RED << " BECAME A GOD FOR A MOMENT! BEWARE! "  << NORM
		<< endl;
	this->goodMode = true;
}