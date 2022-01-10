#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("Default DiamondTrap_Name_clap_name"),
	FragTrap("Default DiamondTrap_Name"),
	ScavTrap("Default DiamondTrap_Name")
{
	this->name = "Default DiamondTrap_Name";
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
	cout << BOLD << BACK_GRAY << "[DiamondTrap]" << NORM;
	cout << BOLD << GREEN << " Def.Constructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

DiamondTrap::DiamondTrap(const string &nameValue) :
	ClapTrap(nameValue + "_clap_name"),
	FragTrap(nameValue),
	ScavTrap(nameValue)
{
	this->name = nameValue;
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
	cout << BOLD << BACK_GRAY << "[DiamondTrap]" << NORM;
	cout << BOLD << GREEN << " Constructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << " called"
		 << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << BOLD << BACK_GRAY << "[DiamondTrap]" << NORM;
	cout << BOLD << RED << " Destructor\t" << NORM
		 << BRIGHT_BLUE << this->name << NORM
		 << "\tcalled"
		 << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copyObject)
{
	cout << BOLD << BACK_GRAY << "[DiamondTrap]" << NORM;
	cout << BOLD << GREEN << " Copy constructor\t" << NORM
		 << "of "
		 << URED << this->name << NORM
		 << " and "
		 << URED << copyObject.name << NORM
		 << " called"
		 << endl;
	*this = copyObject;
}

string	DiamondTrap::getName() const { return (this->name); }
int		DiamondTrap::getHitPoint() const { return (this->hitPoints); }
int		DiamondTrap::getEnergyPoints() const { return (this->energyPoints); }
int		DiamondTrap::getAttackDamage() const { return (this->attackDamage); }

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copyObject)
{
	if (this != &copyObject)
	{
		ClapTrap::operator=(copyObject);
	}
	return (*this);
}

void DiamondTrap::attack(string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	cout << BOLD << BACK_GRAY << "[DiamondTrap]" << NORM;
	cout << UGREEN << " Who am I??? Hm..."
		<< "my name is "
		<< BRIGHT_BLUE << this->name << UGREEN
		<< " and my clapTrap's name is "
		<< BRIGHT_BLUE << this->ClapTrap::name
		<< NORM << endl;
}