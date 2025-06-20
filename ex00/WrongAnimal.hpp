#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& copy);
		~WrongAnimal();

		void	setType(const std::string& type);
		const std::string&	getType() const;

		void	makeSound() const;

	protected:
		std::string _type;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
