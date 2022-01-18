#include "whatever.hpp"

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int	getN() const {return _n;}
private:
	int _n;
};

std::ostream &operator<<(std::ostream &out, const Awesome &object)
{
	out << object.getN();
	return (out);
};

int main(void)
{
	Awesome obj(2), obj1(4);

	swap(obj, obj1);
	cout << "obj.n = " << obj << ", obj1.n = " << obj1 << endl;
	cout << "min( obj.n, obj1.n ) = " << ::min( obj, obj1 ) << endl;
	cout << "max( obj.n, obj1.n ) = " << ::max( obj, obj1 ) << endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << ::min( a, b ) << endl;
	cout << "max( a, b ) = " << ::max( a, b ) << endl;
	string c = "chaine1";
	string d = "chaine2";
	::swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << ::min( c, d ) << endl;
	cout << "max( c, d ) = " << ::max( c, d ) << endl;
	return 0;
}