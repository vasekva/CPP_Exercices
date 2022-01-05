//
// Created by fatality on 05.01.2022.
//

#ifndef CPP_MODULES_MAIN_HEADER_H
#define CPP_MODULES_MAIN_HEADER_H

#ifndef COLOR

#define COLOR
# define BACK_GRAY		"\033[47m"
# define NORM			"\033[0m"
# define BOLD			"\033[1m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define BRIGHT_BLUE	"\033[36m"
# define NONE			"\033[37m"

#endif

#include <cstring>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#include "PhoneBook.h"
#include "Contact.h"

#endif //CPP_MODULES_MAIN_HEADER_H
