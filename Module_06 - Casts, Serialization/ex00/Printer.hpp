#ifndef CPP_PRINTER_HPP
#define CPP_PRINTER_HPP

#include "Converter.hpp"

class Printer
{
	public:
		Printer(string *stats, char charVal, int intVal, float floatVal, double doubleVal);
		~Printer();
		Printer(const Printer &copyObject);
		Printer	&operator=(const Printer &object);
		void	printValues() const;
	private:
		Printer();
		void	printDouble() const;
		void	printFloat() const;
		void	printChar() const;
		void	printInt() const;
		string	*stats;
		double	doubleVal;
		float	floatVal;
		char 	charVal;
		int		intVal;
};


#endif //CPP_PRINTER_HPP
