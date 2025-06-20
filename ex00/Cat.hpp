#ifndef CAT_HPP
# define CAT_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include"Animal.hpp"
#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class Cat : public Animal {
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();

		void	makeSound() const;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
