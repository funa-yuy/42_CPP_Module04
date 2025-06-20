#include"Cat.hpp"

/*
 * デフォルトコンストラクタ
 */
Cat::Cat() : Animal() {
	setType("Cat");
	std::cout << "Cat " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
Cat::Cat(std::string type) : Animal(type) {
	std::cout << "Cat " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
Cat::Cat(const Cat& copy) : Animal(copy) {
	std::cout << "Cat " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Cat &Cat::operator=(const Cat& copy) {
	if (this != &copy)
		setType(copy._type);
	std::cout << "Cat " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

/*
 * デストラクタ
 */
Cat::~Cat() {
	std::cout << "Cat " << _type << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	Cat::makeSound() const {
		std::cout << "Cat : nyann nyann!!" << std::endl;
}
