#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &t, int n)
{
	typename T::iterator iter;

	if ((iter = std::find(t.begin(), t.end(), n)) == t.end())
	{
		throw ("Error, it doesn't have this value!");
	}
	return (iter);
}

#endif