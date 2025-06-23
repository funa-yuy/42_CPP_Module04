#include"Animal.hpp"

/*
 * デフォルトコンストラクタ
 */
Animal::Animal() {
	std::cout << "Animal " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
Animal::Animal(const Animal& copy) : _type(copy._type) {
	std::cout << "Animal " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Animal &Animal::operator=(const Animal& copy) {
	std::cout << "Animal " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	if (this != &copy)
		setType(copy._type);
	return (*this);
}

/*
 * デストラクタ
 */
Animal::~Animal() {
	std::cout << "Animal " << _type << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	Animal::setType(const std::string& type) {
	_type = type;
}
const std::string&	Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
		std::cout << "Animal : ... " << std::endl;
}
