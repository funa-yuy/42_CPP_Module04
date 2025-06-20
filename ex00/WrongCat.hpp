#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include"WrongAnimal.hpp"
#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& copy);
		~WrongCat();

		void	makeSound() const;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
