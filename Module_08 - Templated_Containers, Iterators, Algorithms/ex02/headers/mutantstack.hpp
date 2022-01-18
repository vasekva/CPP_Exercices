#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::string;

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
# define URED			"\033[4;31m"
# define UGREEN			"\033[4;32m"

#endif

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &copyObject);

		MutantStack &operator=(const MutantStack &object);

		iterator end();
		iterator begin();
		const_iterator c_end() const;
		const_iterator c_begin() const;
		reverse_iterator r_end();
		reverse_iterator r_begin();
		const_reverse_iterator cr_end() const;
		const_reverse_iterator cr_begin() const;
};

#include "mutantstack.tpp"

#endif
