#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*object;
	uintptr_t	serialized;
	Data		*deserialized;

	object = new Data();

	cout << "Address of the object: "
		<< UGREEN << object << NORM << endl;
	cout << BRIGHT_BLUE << "\t birthDate: " << NORM
		<< YELLOW << object->getValue() << NORM << endl;
	cout << BRIGHT_BLUE << "\t name: " << NORM
		<< YELLOW << object->getName() << NORM << endl;
	cout << BRIGHT_BLUE << "\t middleName: " << NORM
		<< YELLOW << object->getMiddleName() << NORM << endl;


	serialized = serialize(object);
	cout << PURPLE << "serialize code = " << NORM << serialized << endl;
	deserialized = deserialize(serialized);


	cout << "Address of the deserialized object: " << UGREEN  << deserialized << NORM << endl;
	cout << BRIGHT_BLUE << "\t birthDate: " << NORM
		 << YELLOW << deserialized->getValue() << NORM << endl;
	cout << BRIGHT_BLUE << "\t name: " << NORM
		 << YELLOW << deserialized->getName() << NORM << endl;
	cout << BRIGHT_BLUE << "\t middleName: " << NORM
		 << YELLOW << deserialized->getMiddleName() << NORM << endl;

/*
"========================================================";
"==                      TEST                          ==";
"========================================================";
*/
	cout << YELLOW << "⚙️ Test: " << NORM << endl;
	cout << BRIGHT_BLUE << "Data address before serialization:\t"
		<< GREEN << object << NORM << endl;
	cout << BRIGHT_BLUE << "Data address after serialization:\t"
		 << GREEN << deserialized << NORM << endl;
	if (object == deserialized)
		cout << UGREEN << "✅  SUCCESS ✅ " << NORM << endl;
	else
		cout << URED << "❌  FAILURE ❌ " << NORM << endl;

	delete object;
	return (0);
}