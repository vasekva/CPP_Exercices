#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap_Name";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << BOLD << GREEN << "Default Constructor\t" << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

ClapTrap::ClapTrap(const string &name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		 << "of an object with name "
		 << BRIGHT_BLUE << this->getName() << NORM
		 << " called"
		 << endl;
}

ClapTrap::~ClapTrap()
{
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		 << "of the object with name \""
		 << BRIGHT_BLUE << this->getName() << NORM
		 << "\"\tcalled"
		 << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyObject)
{
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
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
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		<< RED << " attack " << BRIGHT_BLUE << target << NORM ", "
		<< "causing " << URED << this->getAttackDamage() << NORM
		<< " points of damage!"
		<< endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		 << " gets " << URED << amount << NORM " points of damage!"
		 << endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << BOLD << PURPLE << "[ClapTrap]" << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->getName() << NORM
		 << " repaired his hitPoints by " << GREEN << amount << NORM " points!"
		 << endl;
	this->hitPoints += amount;
}
