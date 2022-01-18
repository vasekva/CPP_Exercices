#include "Span.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

Span::Span(const unsigned int n) { this->capacity = n; }

Span::CustomSpanException::CustomSpanException(const string &errorMsg)
{
	string error = URED;
	error += errorMsg;
	error += NORM;
	this->errorMsg = error;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

Span::~Span() { data.clear(); }
Span::CustomSpanException::~CustomSpanException() throw() { }

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Span::Span(const Span &copyObject) { *this = copyObject; }

Span	&Span::operator=(const Span &object)
{
	if (this != &object)
	{
		data = object.data;
		capacity = object.capacity;
	}
	return (*this);
}

int  &Span::operator[](unsigned int i)
{
	return (data.at(i));
}

std::ostream	&operator<<(std::ostream &out, const Span &object)
{
	int capacity = object.getCapacity();
	int	size = object.getData().size();

	cout << endl;
	cout << UGREEN << "Data capacity:" << NORM
		<< " " << capacity << endl;
	cout << UGREEN << "Cells occupied:" << NORM
		<< " " << size << endl;
	cout << UGREEN << "Free cells:" << NORM
		" " << capacity - size << endl;
	cout << BRIGHT_BLUE << "It's values: " << NORM;
	object.printData();
	return (out);
}

/*
"========================================================";
"==                     Getters                        ==";
"========================================================";
*/

int Span::getCapacity() const { return (this->capacity); }

std::vector<int> Span::getData() const
{
	return (this->data);
}

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

const char *Span::CustomSpanException::what() const throw()
{
	return (this->errorMsg.c_str());
}


void    Span::addNumber(const int n)
{
	if (data.size() + 1 > capacity)
		throw Span::CustomSpanException("❌ Data capacity is full!");
	data.push_back(n);
}

void    Span::addRandomNumbers(int count)
{
	for (int i = 0; i < count; i++)
	{
		if (data.size() + 1 > capacity)
			throw Span::CustomSpanException("❌ Data capacity is full!");
		data.push_back(rand() % count);
	}
}

void Span::printData() const
{
	for (int i = 0; i < (int)this->data.size(); i++)
	{
		cout << this->data[i];
		if (i + 1 != (int)this->data.size())
			cout << " ";
	}
	cout << endl;
}

// ! методы с арифметикой итераторов не делать константными

int Span::shortestSpan()
{
	int		secondMin;
	vIter	minIt;

	if (data.size() <= 1)
		throw CustomSpanException("Not enough numbers!");
	minIt = std::min_element(data.begin(), data.end());
	if (minIt == data.begin())
		secondMin = *std::min_element(data.begin() + 1, data.end());
	else if (minIt + 1 == data.end())
		secondMin = *std::min_element(data.begin(), data.end() - 1);
	else
		secondMin = std::min(*std::min_element(data.begin(), minIt - 1), *std::min_element(minIt + 1, data.end()));
	return (secondMin - *minIt);
}

int Span::longestSpan()
{
	if (data.size() <= 1)
		throw CustomSpanException("❌ Not enough numbers!");
	vIter min = std::min_element(data.begin(), data.end());
	vIter max = std::max_element(data.begin(), data.end());
	return (*max - *min);
}