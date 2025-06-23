#ifndef DOG_HPP
# define DOG_HPP

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

class Dog : public Animal {
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog();

		void	makeSound() const;//関数のオーバーライド

	private:
		Brain	*_brain;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
