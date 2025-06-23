#ifndef BRAIN_HPP
# define BRAIN_HPP

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

class Brain {
	public:
		Brain();
		Brain(const std::string &ideas);
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);
		~Brain();

	private:
		std::string	_ideas[100];
		static const int	NUM_IDEAS = 100;

};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
