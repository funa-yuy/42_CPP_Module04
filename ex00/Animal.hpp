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
		virtual ~Animal();//virtualなメンバ関数を持っている場合は、仮想デストラクタにする

		void	setType(const std::string& type);
		const std::string&	getType() const;

		virtual void	makeSound() const;//仮想関数

	protected:
		std::string _type;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
