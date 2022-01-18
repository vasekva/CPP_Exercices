#include "Base.hpp"

class C : public Base {};
class B : public Base {};
class A : public Base {};

Base::Base() { }
Base::~Base() { }

Base *Base::generate()
{
	Base	*ptr;
	int	num = std::rand() % 3;

//	cout << RED << num << NORM << endl;
	switch (num)
	{
		case (0): ptr = new A(); break;
		case (1): ptr = new B(); break;
		case (2): ptr = new C(); break;
	}
	return (ptr);
}

void Base::identifyPointer(Base *p)
{
	A *a;
	B *b;
	C *c;

	if (!p)
		return ;
	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);

	if (a != nullptr)
	{
		cout << UGREEN << "YEAH! It's type A ✅ \n";
		cout << "Object has been identifier by " << BLUE << "pointer" << NORM << endl << endl;
		return ;
	}
	else if (b != nullptr)
	{
		cout << UGREEN << "YEAH! It's type B ✅ \n";
		cout << "Object has been identifier by " << BLUE << "pointer" << NORM << endl << endl;
		return ;
	}
	else if (c != nullptr)
	{
		cout << UGREEN << "YEAH! It's type C ✅ \n";
		cout << "Object has been identifier by " << BLUE << "pointer" << NORM << endl << endl;
		return ;
	}
}

void Base::identifyReference(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A &>(p);
		cout << UGREEN << "YEAH! It's type A ✅ \n";
		cout << "Object has been identifier by " << BRIGHT_BLUE << "reference" << NORM << endl << endl;
		return ;
	}
	catch (...)
	{
		cout << RED << "❌ Oops! It's not a type" << GREEN << " A 😢 " << NORM << endl;
	}

	try
	{
		b = dynamic_cast<B &>(p);
		cout << UGREEN << "YEAH! It's type B ✅ \n";
		cout << "Object has been identifier by " << BRIGHT_BLUE << "reference" << NORM << endl << endl;
		return ;
	}
	catch (...)
	{
		cout << RED << "❌ Oops! It's not a type" << GREEN << " B 😢 " << NORM << endl;
	}

	try
	{
		c = dynamic_cast<C &>(p);
		cout << UGREEN << "YEAH! It's type C ✅ \n";
		cout << "Object has been identifier by " << BRIGHT_BLUE << "reference" << NORM << endl << endl;
		return ;
	}
	catch (...)
	{
		cout << RED << "❌ Oops! It's not a type" << GREEN << " C 😢 " << NORM << endl;
	}
}