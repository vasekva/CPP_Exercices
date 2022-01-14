#include "Data.hpp"

Data::Data()
{
	this->birthDate = 77;
	this->name = "Bob";
	this->middleName = "O'Konor";
}

Data::~Data() { }

Data::Data(const Data &copyObject)
{
	*this = copyObject;
}

Data &Data::operator=(const Data &object)
{
	if (this != &object)
	{
		this->birthDate = object.birthDate;
		this->name = object.name;
		this->middleName = object.middleName;
	}
	return (*this);
}

const string	&Data::getName() const { return (this->name); }
int				Data::getValue() const { return (this->birthDate); }
const string	&Data::getMiddleName() const { return (this->middleName); }