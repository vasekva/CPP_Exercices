#include "Converter.hpp"

Converter::Converter(string convertValue) :
	convertStr(convertValue)
{
	this->charVal = 0;
	this->intVal = 0;
	this->floatVal = 0.0f;
	this->doubleVal = 0.0;
}

Converter::~Converter() {}

Converter::Converter(const Converter &copyObject)
{
	*this = copyObject;
}

Converter &Converter::operator=(const Converter &object)
{
	if (this != &object)
	{
		this->convertStr = object.getStr();
		this->charVal = object.getChar();
		this->intVal = object.getInt();
		this->floatVal = object.getFloat();
		this->doubleVal = object.getDouble();
	}
	return (*this);
}

const string	&Converter::getStr() const { return (this->convertStr); }
double			Converter::getDouble() const { return (this->doubleVal); }
float			Converter::getFloat() const { return (this->floatVal); }
char			Converter::getChar() const { return (this->charVal); }
int				Converter::getInt() const { return (this->intVal); }

bool Converter::isChar() const
{
	bool ret;

	ret = false;
	if (this->convertStr.length() == 1 && std::isdigit(convertStr[0]))
		ret = true;
	return (ret);
}

void Converter::startConverting()
{
	if (isChar())
		cout << GREEN << "Correct! ✅ " << endl;
	else
		cout << RED << "❌ Error!" << endl;
}