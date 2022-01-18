#include "Character.hpp"

Character::Character(const string  &name) : name(name)
{
	cout << BOLD << PURPLE << "[Character ⚙️ ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
	for (int i = 0; i < 4; ++i)
		this->amateria[i] = nullptr;
}

Character::~Character()
{
	cout << BOLD << PURPLE << "[Character ⚙️ ] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
	for (int i = 0; i < 4; ++i)
		if (this->amateria[i])
			delete this->amateria[i];
}

Character::Character(const Character &copyObject)
{
	cout << BOLD << PURPLE << "[Character ⚙️ ] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "called"
		 << endl;
	*this = copyObject;
}

Character &Character::operator=(const Character &object)
{
	if (this != &object)
	{
		for (int i = 0; i < 4; ++i)
			if (this->amateria[i])
				delete this->amateria[i];
		this->name = object.name;
		for (int i = 0; i < 4; ++i)
			this->amateria[i] = object.amateria[i]->clone();
	}
	return (*this);
}

const string &Character::getName() const { return name; }

void 	Character::equip(AMateria *object)
{
	if (object == nullptr)
	{
		cout << RED << "Fail during equipping! Materia is empty! ⛔ " << NORM << endl;
		return;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (this->amateria[i] == nullptr)
		{
				this->amateria[i] = object;
				cout << GREEN << "Equipping has been end successfully!  ✅ " << NORM << endl;
				return;
		}
	}
	cout << RED << "Fail during equipping! Materia is full! ⛔️ " << NORM << std::endl;
}

void 	Character::unequip(int index)
{
	if (index >= 4 || index < 0 || this->amateria[index] == nullptr)
	{
		cout << RED << "Fail during unequipping! ⛔️ " << NORM << endl;
		return ;
	}
	if (this->amateria[index])
	{
		this->amateria[index] = nullptr;
		cout << GREEN << "Unequipping has been end successfully! ✅ " << NORM << endl;
	}
}

void 	Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4)
		if (this->amateria[index])
			this->amateria[index]->use(target);
}