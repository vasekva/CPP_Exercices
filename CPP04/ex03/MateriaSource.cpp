#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	cout << BOLD << RED << "[MaterialSource] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
	for (int i = 0; i < 4; ++i)
		storage[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	cout << BOLD << RED << "[MaterialSource] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
	for (int i = 0; i < 4; ++i)
	{
		if (storage[i])
			delete storage[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copyObject)
{
	cout << BOLD << RED << "[MaterialSource] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "called"
		 << endl;
	*this = copyObject;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &object)
{
	if (this != &object)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (storage[i])
			{
				delete storage[i];
				storage[i] = nullptr;
				this->storage[i] = object.storage[i]->clone();
			}
		}
	}
	return (*this);
}

void  MateriaSource::learnMateria(AMateria *object)
{
	if (object == nullptr)
	{
		cout << RED << "Fail during learningMateria! Materia is empty! ⛔ " << NORM << endl;
		return ;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (storage[i] == nullptr)
		{
				storage[i] = object;
				cout << GREEN << "learnMateria is successfully!!! ✅ " << NORM << endl;
				return ;
		}
	}
	cout << RED << "Fail during learningMateria! Materia is full! ⛔ ️" << NORM << endl;
}

AMateria *MateriaSource::createMateria(const string &type)
{
	for (int i = 0; i < 4; ++i)
		if (storage[i])
			if (storage[i]->getType() == type)
				return (storage[i]->clone());
	return (nullptr);
}