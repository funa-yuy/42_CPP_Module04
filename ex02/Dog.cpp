#include"Dog.hpp"

/*
 * デフォルトコンストラクタ
 */
Dog::Dog() : Animal() {
	std::cout << "Dog " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
	setType("Dog");
	_brain = new Brain;
}

/*
 * コンストラクタ
 */
Dog::Dog(const std::string &type) : Animal(type), _brain(new Brain()) {
	std::cout << "Dog " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
Dog::Dog(const Dog& copy) : Animal(copy), _brain(new Brain(*(copy._brain))) {
	std::cout << "Dog " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Dog &Dog::operator=(const Dog& copy) {
	std::cout << "Dog " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	if (this != &copy)
	 {
		setType(copy._type);
		delete _brain;
		_brain = new Brain(*(copy._brain));
	 }
	return (*this);
}

/*
 * デストラクタ
 */
Dog::~Dog() {
	std::cout << "Dog " << _type << " デストラクタが呼ばれました" << std::endl;
	delete _brain;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	Dog::makeSound() const {
		std::cout << "Dog : Wan Wan !!" << std::endl;
}
