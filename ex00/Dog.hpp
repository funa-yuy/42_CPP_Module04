#ifndef DOG_HPP
# define DOG_HPP

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

class Dog : public Animal {
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog();

		void	makeSound() const; //関数のオーバーライド
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
