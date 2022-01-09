#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default name";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << GREEN << "Default Constructor " << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

ClapTrap::ClapTrap(string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << GREEN << "Constructor " << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

ClapTrap::~ClapTrap()
{
	cout << BOLD << RED << "Destructor " << NORM
		 << "of the object with name \""
		 << BRIGHT_BLUE << this->getName() << NORM
		 << "\" called"
		 << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyObject)
{
	cout << BOLD << YELLOW << "Copy constructor " << NORM
		 << "of an object "
		 << URED << this << NORM
		 << " and "
		 << URED << &copyObject << NORM
		 << " called"
		 << endl;
	*this = copyObject;
}

string	ClapTrap::getName() const { return (this->name); }
int		ClapTrap::getHitPoint() const { return (this->hitPoints); }
int		ClapTrap::getEnergyPoints() const { return (this->energyPoints); }
int		ClapTrap::getAttackDamage() const { return (this->attackDamage); }

ClapTrap	&ClapTrap::operator=(const ClapTrap &copyObject)
{
	if (this != &copyObject)
	{
		this->name = "copy_" + copyObject.getName();
		this->hitPoints = copyObject.getHitPoint();
		this->energyPoints = copyObject.getEnergyPoints();
		this->attackDamage = copyObject.getAttackDamage();
	}
	return (*this);
}

void ClapTrap::attack(const string &target)
{
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		<< " attack " << BRIGHT_BLUE << target << NORM ", "
		<< "causing " << URED << this->getAttackDamage() << NORM
		<< " points of damage!"
		<< endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		 << " gets " << URED << amount << NORM "points of damage!"
		 << endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		 << " repaired his hitPoints by " << GREEN << amount << NORM " points!"
		 << endl;
	this->hitPoints += amount;
}
