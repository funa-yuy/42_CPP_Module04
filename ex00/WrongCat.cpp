#include"WrongCat.hpp"

/*
 * デフォルトコンストラクタ
 */
WrongCat::WrongCat() : WrongAnimal() {
	setType("WrongCat");
	std::cout << "WrongCat " << _type << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat " << _type << " コンストラクタが呼ばれました" << std::endl;
}

/*
 * コピーコンストラクタ
 */
WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << "WrongCat " << _type << " コピーコンストラクタが呼ばれました" << std::endl;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
WrongCat &WrongCat::operator=(const WrongCat& copy) {
	if (this != &copy)
		setType(copy._type);
	std::cout << "WrongCat " << _type << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

/*
 * デストラクタ
 */
WrongCat::~WrongCat() {
	std::cout << "WrongCat " << _type << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------

void	WrongCat::makeSound() const {
		std::cout << "WrongCat : nyann nyann!!" << std::endl;
}
