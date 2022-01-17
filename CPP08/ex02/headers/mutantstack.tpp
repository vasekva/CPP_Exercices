#include "mutantstack.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() { }

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

template <class T, class Container>
MutantStack<T, Container>::~MutantStack() { }

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/


template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &copyObject) : std::stack<T, Container>(copyObject) { }

template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &object)
{
	if (this != &object)
	{
		std::stack<T, Container>::operator=(object);
	}
	return (*this);
}

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}

// "======================================CONST======================================";
// "=================================================================================";

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::c_begin() const
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::c_end() const
{
	return (this->c.end());
}

// "======================================REVERSE======================================";
// "=================================================================================";

template <class T, class Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::r_begin()
{
	return (this->c.rbegin());
}

template <class T, class Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::r_end()
{
	return (this->c.rend());
}

// "================================CONST REVERSE====================================";
// "=================================================================================";

template <class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::cr_begin() const
{
	return (this->c.rbegin());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::cr_end() const
{
	return (this->c.rend());
}