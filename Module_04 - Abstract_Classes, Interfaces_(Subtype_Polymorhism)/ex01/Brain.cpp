#include "Brain.hpp"

Brain::Brain()
{
	cout << BOLD << YELLOW << "[Brain 🧠 ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea #" + std::to_string(i + 1);
}

Brain::~Brain()
{
	cout << BOLD << YELLOW << "[Brain 🧠 ] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Brain::Brain(const Brain &copyObject)
{
	cout << BOLD << YELLOW << "[Brain 🧠 ] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		 << "called"
		 << endl;
	*this = copyObject;
}

Brain    &Brain::operator=(const Brain  &object)
{
	if (this != &object)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = object.ideas[i];
	}
	return (*this);
}

string	Brain::getIdea(const int index) const { return this->ideas[index]; }
void	Brain::setIdea(int index, std::string idea) { this->ideas[index] = idea; }