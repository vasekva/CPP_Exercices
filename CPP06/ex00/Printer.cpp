#include "Printer.hpp"

Printer::Printer(string *stats, char charVal, int intVal, float floatVal, double doubleVal)
{
	this->stats = new string[4];
	std::copy(stats, stats + 4, this->stats);
	this->charVal = charVal;
	this->intVal = intVal;
	this->floatVal = floatVal;
	this->doubleVal = doubleVal;
}

Printer::~Printer()
{
	delete []this->stats;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Printer::Printer(const Printer &copyObject)
{
	*this = copyObject;
}

Printer &Printer::operator=(const Printer &object)
{
	if (this != &object)
	{
		this->doubleVal = object.doubleVal;
		this->stats = new string[4];
		std::copy(object.stats, object.stats + 4, this->stats);
		this->floatVal = object.floatVal;
		this->charVal = object.charVal;
		this->intVal = object.intVal;
	}
	return (*this);
}
/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void Printer::printDouble() const
{
	cout << "double: ";
	if (stats[0] == "Correct")
	{
		if (doubleVal - intVal == 0)
		{
			cout << UGREEN << doubleVal << ".0" << NORM << " ✅ " << endl;
		}
		else
			cout << UGREEN << doubleVal << NORM << " ✅ " << endl;
	}
	else
		cout << URED << stats[0] << NORM << " 😢" << endl;
}

void Printer::printFloat() const
{
	cout << "float: ";
	if (stats[1] == "Correct")
	{
		if (floatVal - intVal == 0)
		{
			cout << UGREEN << floatVal << ".0f" << NORM << " ✅ " << endl;
		}
		else
			cout << UGREEN << floatVal << "f" << NORM << " ✅ " << endl;
	}
	else
		cout << URED << stats[1] << NORM << " 😢" << endl;
}

void Printer::printChar() const
{
	cout << "char: ";
	if (stats[2] == "Correct")
		cout << UGREEN << '\'' << charVal << '\'' << NORM << " ✅ " << endl;
	else
		cout << URED << stats[2] << NORM << " 😢" << endl;
}

void Printer::printInt() const
{
	cout << "int: ";
	if (stats[3] == "Correct")
		cout << UGREEN << doubleVal << NORM << " ✅ " << endl;
	else
		cout << URED << stats[3] << NORM << " 😢" << endl;
}

void Printer::printValues() const
{
	printDouble();
	printFloat();
	printInt();
	printChar();
}
