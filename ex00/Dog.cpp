#include"Dog.hpp"

/*
 * デフォルトコンストラクタ
 */
Dog::Dog() : Animal() {
	setType("Dog");
	std::cout << "Dog " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
Dog::Dog(std::string type) : Animal(type) {
	std::cout << "Dog " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "Dog " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Dog &Dog::operator=(const Dog& copy) {
	if (this != &copy)
		setType(copy._type);
	std::cout << "Dog " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

/*
 * デストラクタ
 */
Dog::~Dog() {
	std::cout << "Dog " << _type << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	Dog::makeSound() const {
		std::cout << "Dog : Wan Wan !!" << std::endl;
}
