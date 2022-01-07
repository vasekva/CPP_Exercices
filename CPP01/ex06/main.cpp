#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		cout << YELLOW << "So...probably, Karen too quietly said something... Try again\n";
	}
	else if (argc == 2)
	{
		Karen karen = Karen();
		karen.complain(argv[1]);
	}
	else
		cout << BOLD << RED << "Tsss! Too many words!!\n";
	return (0);
}