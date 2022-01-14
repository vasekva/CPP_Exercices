#include "Converter.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

Converter::Converter(string convertValue) :
	convertStr(convertValue)
{
	this->charVal = 0;
	this->intVal = 0;
	this->floatVal = 0.0f;
	this->doubleVal = 0.0;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

Converter::~Converter() {}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Converter::Converter(const Converter &copyObject)
{
	*this = copyObject;
}

Converter &Converter::operator=(const Converter &object)
{
	if (this != &object)
	{
		this->doubleVal = object.getDouble();
		this->convertStr = object.getStr();
		this->floatVal = object.getFloat();
		this->charVal = object.getChar();
		this->intVal = object.getInt();
	}
	return (*this);
}

/*
"========================================================";
"==                     Getters                        ==";
"========================================================";
*/

double			Converter::getDouble() const { return (this->doubleVal); }
const string	&Converter::getStr() const { return (this->convertStr); }
float			Converter::getFloat() const { return (this->floatVal); }
char			Converter::getChar() const { return (this->charVal); }
int				Converter::getInt() const { return (this->intVal); }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void Converter::checkChar(void)
{
	try
	{
		if (convertStr.length() == 1 && !std::isdigit(convertStr[0]))
			charVal = static_cast<char>(convertStr[0]);
		else if (std::stoi(convertStr) >= 0 && std::stoi(convertStr) <= 127)
			charVal = static_cast<char>(std::stoi(convertStr));
		else
			throw ("Error during charCast1!");
		if (std::isprint(charVal))
			cStat = "Correct";
		else
			cStat = "Non displayable";
	}
	catch(...)
	{
		cStat = "impossible";
	}
}

void Converter::checkDouble(void)
{
	try
	{
		if (convertStr.length() == 1 && std::isprint(convertStr[0]))
		{
			if (!std::isdigit(convertStr[0]))
				dStat = "impossible";
			else
			{
				this->doubleVal = std::strtod(convertStr.c_str(), NULL);
				dStat = "Correct";
			}
		}
		else
		{
			this->doubleVal = static_cast<double>(std::stod(convertStr));
			dStat = "Correct";
		}
	}
	catch(...)
	{
		dStat = "impossible";
	}
}

void Converter::checkFloat(void)
{
	try
	{
		if (convertStr.length() == 1 && std::isprint(convertStr[0]))
		{
			if (!std::isdigit(convertStr[0]))
				fStat = "impossible";
			else
			{
				this->floatVal = std::strtof(convertStr.c_str(), NULL);
				fStat = "Correct";
			}
		}
		else
		{
			this->floatVal = static_cast<float>(std::stof(convertStr));
			fStat = "Correct";
		}
	}
	catch(...)
	{
		fStat = "impossible";
	}
}

void Converter::checkInt(void)
{
	try
	{
		if (!std::isdigit(convertStr[0]))
			throw ("Error during IntCast!");
		else
		{
			this->intVal = static_cast<int>(std::stoi(convertStr.c_str(), NULL));
			iStat = "Correct";
		}
	}
	catch(...)
	{
		iStat = "impossible";
	}
}

void Converter::startConverting()
{
	checkChar();
	checkDouble();
	checkFloat();
	checkInt();
	stats[0] = this->dStat;
	stats[1] = this->fStat;
	stats[2] = this->cStat;
	stats[3] = this->iStat;
	Printer printer(stats, this->getChar(), this->getInt(), this->getFloat(), this->getDouble());
	printer.printValues();
}
