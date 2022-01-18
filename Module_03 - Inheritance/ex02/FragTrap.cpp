#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap_Name")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BOLD << GREEN << "Default Constructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

FragTrap::FragTrap(const string &name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

FragTrap::~FragTrap()
{
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << "\tcalled"
		 << endl;
}

FragTrap::FragTrap(const FragTrap &copyObject)
{
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "of "
		 << URED << this->name << NORM
		 << " and "
		 << URED << copyObject.name << NORM
		 << " called"
		 << endl;
	*this = copyObject;
}

string	FragTrap::getName() const { return (this->name); }
int		FragTrap::getHitPoint() const { return (this->hitPoints); }
int		FragTrap::getEnergyPoints() const { return (this->energyPoints); }
int		FragTrap::getAttackDamage() const { return (this->attackDamage); }


FragTrap	&FragTrap::operator=(const FragTrap &copyObject)
{
	if (this != &copyObject)
	{
		ClapTrap::operator=(copyObject);
	}
	return (*this);
}

void FragTrap::attack(const string &target) const
{
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BRIGHT_BLUE << this->name << NORM
		 << RED << " attack " << BRIGHT_BLUE << target << NORM ", "
		 << "causing " << URED << this->attackDamage << NORM
		 << " points of damage!"
		 << endl;
}

void	FragTrap::highFivesGuys() const
{
	cout << BOLD << BLUE << "[FragTrap] " << NORM;
	cout << BRIGHT_BLUE << this->name << " " << UGREEN
		 << "Heeeeey! High five brooo!" << NORM
		 << endl;
}