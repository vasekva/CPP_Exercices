#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap_Name";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << BOLD << GREEN << "Def.Constructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

ClapTrap::ClapTrap(const string &name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << BOLD << GREEN << "Constructor\t\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

ClapTrap::~ClapTrap()
{
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << BOLD << RED << "Destructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << "\tcalled"
		 << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyObject)
{
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "of "
		 << URED << this->name << NORM
		 << " and "
		 << URED << copyObject.name << NORM
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
		this->name = "copy_" + copyObject.name;
		this->hitPoints = copyObject.hitPoints;
		this->energyPoints = copyObject.energyPoints;
		this->attackDamage = copyObject.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const string &target)
{
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->name << NORM
		<< RED << " attack " << BRIGHT_BLUE << target << NORM ", "
		<< "causing " << URED << this->attackDamage << NORM
		<< " points of damage!"
		<< endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->name << NORM
		 << " gets " << URED << amount << NORM " points of damage!"
		 << endl;
	if ((this->hitPoints -= amount) < 0)
		this->hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << BOLD << PURPLE << "[ClapTrap] " << NORM;
	cout << "ClapTrap " << BRIGHT_BLUE << this->name << NORM
		 << " repaired his hitPoints by " << GREEN << amount << NORM " points!"
		 << endl;
	this->hitPoints += amount;
}
