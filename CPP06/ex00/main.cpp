#include "Converter.hpp"
#include "Printer.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || (argc == 2 && strlen(argv[1]) == 0))
	{
		cout << RED << " ❌ Error! Incorrect parameter input 😢 " << NORM << endl;
	}
	else
	{
		Converter converter(argv[1]);
		converter.startConverting();
	}
}