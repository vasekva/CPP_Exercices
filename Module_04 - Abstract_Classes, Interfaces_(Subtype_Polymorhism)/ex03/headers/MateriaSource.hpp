#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
			AMateria *storage[4];
	public:
			MateriaSource();
			~MateriaSource();
			MateriaSource(const MateriaSource &copyObject);
			MateriaSource &operator=(const MateriaSource &object);
			void		learnMateria(AMateria *materia) ;
			AMateria	*createMateria(const string &type);

};

#endif