#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

#include <string>
#include <iostream>

using	std::cout;
using	std::endl;
using	std::string;

template<typename T>
void	printSmiles(const T &ptr)
{
	if (ptr == "sad")
		cout << " ☹️ " << endl;
	else if (ptr == "happiness")
		cout << " 😄️ " << endl;
	else if (ptr == "dance")
		cout << " 🎵 🕺🏻 🎶 " << endl;
	else
		cout << "Oh, i don't know what to do (" << endl;
}

template <typename T>
void	printUpCase(const T &ptr)
{
	cout << (char)std::toupper(ptr);
}

template <typename T>
void	iter(T *ptr, unsigned int length, void(*f)(T const &elem))
{
	for (int i = 0; i < (int)length; i++)
		f(ptr[i]);
	cout << endl;
}

#endif