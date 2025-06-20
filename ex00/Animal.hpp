#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class Animal {
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		~Animal();

		void	setType(const std::string& type);
		const std::string&	getType() const;

		virtual void	makeSound() const;

	protected:
		std::string _type;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
