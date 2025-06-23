#ifndef CAT_HPP
# define CAT_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include"Animal.hpp"
#include"Brain.hpp"
#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class Cat : public Animal {
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();

		void	makeSound() const; //関数のオーバーライド

	private:
		Brain	*_brain;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
