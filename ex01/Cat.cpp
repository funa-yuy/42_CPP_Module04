#include"Cat.hpp"

/*
 * デフォルトコンストラクタ
 */
Cat::Cat() : Animal() {
	std::cout << "Cat " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
	setType("Cat");
	_brain = new Brain;
}

/*
 * コンストラクタ
 */
Cat::Cat(const std::string &type) : Animal(type), _brain(new Brain()) {
	std::cout << "Cat " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
Cat::Cat(const Cat& copy) : Animal(copy), _brain(new Brain(*(copy._brain))) {
	std::cout << "Cat " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Cat &Cat::operator=(const Cat& copy) {
	std::cout << "Cat " << _type << " コピー代入演算子が呼ばれました" << std::endl;
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
Cat::~Cat() {
	std::cout << "Dog " << _type << " デストラクタが呼ばれました" << std::endl;
	delete _brain;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	Cat::makeSound() const {
		std::cout << "Cat : nyann nyann!!" << std::endl;
}
