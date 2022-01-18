#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template<typename T>
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	char symbols[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'u', 'c', 'k',  'u'};
	string emotions[5] = {"sad", "happiness", "dance", "hi, i'm steeve"};
	iter(tab, 5, print);
	iter(tab2, 5, print);
	iter(symbols, 10, printUpCase);
	iter(emotions, 5, printSmiles);
	return (0);
}