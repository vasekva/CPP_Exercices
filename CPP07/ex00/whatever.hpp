#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP

#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(const T &a, const T &b) { return ((a < b) ? a : b); }

template <typename T>
T	max(const T &a, const T &b) { return ((a > b) ? a : b); }


#endif