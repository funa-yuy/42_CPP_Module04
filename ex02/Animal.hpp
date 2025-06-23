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

/* 純粋仮想関数が定義されているクラスを、抽象クラスという */
class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal& operator=(const Animal& copy);
		Animal(const Animal& copy);
		virtual ~Animal() = 0;//純粋仮想関数

		void	setType(const std::string& type);
		const std::string&	getType() const;

		virtual void	makeSound() const = 0; //純粋仮想関数

	protected:
		std::string _type;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
