#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->size = n;
}

Span::~Span()
{
	data.clear();
}

Span::Span(const Span &object)
{
	*this = object;
}

Span	&Span::operator=(const Span &copyObject)
{
	if (this != &copyObject)
	{
		this->copyObject.data.clear();
		this->size = copyObject.size;
		this->data = copyObject.data;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Span &object)
{
	cout << object.getSize() << endl;
	return (out);
};

int Span::getSize() const { return (this->size); }

void	Span::addNumber(const int n)
{
	if (data.size() + 1 > size)
		throw Span::objectSizeException("Object is already full!");
	data.push_back(n);
	size++;
}

int		Span::longestSpan(void) const
{
	if (size <= 1)
		throw Span::objectSizeException("Not enough numbers!");

	vectIt	minIt = std::min_element(data.begin(), data.end());
	vectIt	maxIt = std::max_element(data.begin(), data.end());

	return (*maxIt - *minIt);
}

int		Span::shortestSpan(void) const
{
	int		secondMin;
	vectIt	minIt;

	if (size <= 1)
		throw Span::objectSizeException("Not enough numbers!");
	minIt = std::min_element(data.begin(), data.end());
	if (minIt == data.begin())
		secondMin = *std::min_element(data.begin() + 1, data.end());
	else if (minIt + 1 == _data.end())
		secondMin = *std::min_element(data.begin(), data.end() - 1);
	else
		secondMin = std::min(*std::min_element(data.begin(), minIt - 1), *std::min_element(minIt + 1, data.end()));
	return (secondMin - *minIt);
}