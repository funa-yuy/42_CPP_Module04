#include"WrongAnimal.hpp"

/*
 * デフォルトコンストラクタ
 */
WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type) {
	std::cout << "WrongAnimal " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy) {
	if (this != &copy)
		setType(copy._type);
	std::cout << "WrongAnimal " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

/*
 * デストラクタ
 */
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal " << _type << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	WrongAnimal::setType(const std::string& type) {
	_type = type;
}
const std::string&	WrongAnimal::getType() const {
	return (_type);
}


void	WrongAnimal::makeSound() const {
		std::cout << "WrongAnimal : ... " << std::endl;
}
