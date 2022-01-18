#include "Karen.hpp"

Karen::Karen()
{
	cout << "Karen has been "
		 << BOLD << GREEN << "created!" << NORM << endl;
}

Karen::~Karen()
{
	cout << "Karen has been "
		<< BOLD << RED << "destroyed!" << NORM << endl;
}

void Karen::debug()
{
	cout << BOLD << BRIGHT_BLUE << "    "
		 << "[ DEBUG ] " << NORM
		 << "I love to get extra bacon for my "
			"7XL-double-cheese-triple-pickle-special-ketchup burger. "
			"I just love it!"
		 << endl;
}

void Karen::info()
{
	cout << BOLD << GREEN << "    "
		<< "[ INFO ] " << NORM
		<< "I cannot believe adding extra "
		   "bacon cost more money. You don’t put enough! "
		   "If you did I would not have to ask for it!"
		<< endl;
}

void Karen::warning()
{
	cout << BOLD << YELLOW << "    "
		 << "[ WARNING ] " << NORM
		 << "I think I deserve to have some extra bacon for free. "
			"I’ve been coming here for years and you just started "
			"working here last month."
		 << endl;
}

void Karen::error()
{
	cout << BOLD << RED << "    "
		 << "[ ERROR ] " << NORM
		 << "This is unacceptable, I want to speak to the manager now."
		 << endl;
}

void Karen::complain(string level)
{
	string	actions[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	methods	met[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int		position;
	bool 	hasAction;

	position = 0;
	hasAction = false;
	int length = sizeof(met)/sizeof(met[0]);
	while (position < length)
	{
		if (level.compare(actions[position]) == 0)
		{
			hasAction = true;
			break;
		}
		position++;
	}
	if (hasAction)
		(this->*met[position])();
	else
		cout << BRIGHT_BLUE << URED
			<< "You entered" << NORM
			<< " \"" << level<< "\" " << URED
			<< "Sorry, i don't know what to do(((("
			<< NORM << endl;
}
