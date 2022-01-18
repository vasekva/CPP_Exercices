#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

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

using std::endl;
using std::cout;

template <typename T>
class Array
{
	public:
		Array() : arraySize(0), arrPtr(new T[0]) { };
		Array(unsigned int size) : arraySize(size), arrPtr(new T[size]) { };
		Array(const Array &copyObject) { *this = copyObject; };
		Array &operator=(const Array &object)
		{
			if (this != &object)
			{
				this->arraySize = object.size();
				this->arrPtr = new T[this->arraySize];
				for (unsigned int i = 0; i < arraySize; i++)
					this->arrPtr[i] = object.arrPtr[i];
			}
			return (*this);
		};
		T	&operator[](unsigned int index)
		{
			std::string errorMsg = URED;

			errorMsg += "Out of bounds!";
			errorMsg += NORM;
			if (index >= this->size())
				throw std::out_of_range(errorMsg);
			return (this->arrPtr[index]);
		}
		~Array() { delete []this->arrPtr; };
		unsigned int size() const { return (this->arraySize); };
	private:
		unsigned int	arraySize;
		T				*arrPtr;
};

#endif //CPP_ARRAY_HPP
