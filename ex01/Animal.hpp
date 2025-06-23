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
		Animal(std::string type);
		Animal& operator=(const Animal& copy);
		Animal(const Animal& copy);
		virtual ~Animal();//仮想関数

		void	setType(const std::string& type);
		const std::string&	getType() const;

		virtual void	makeSound() const; //仮想関数

	protected:
		std::string _type;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
