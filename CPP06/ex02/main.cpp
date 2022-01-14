#include "Base.hpp"

int	main(void)
{
	Base	base;

	Base *random = base.generate();
	base.identifyPointer(random);

	Base *random1 = base.generate();
	base.identifyPointer(random1);

	Base *random2 = base.generate();
	base.identifyReference(*random2);
	return (0);
}