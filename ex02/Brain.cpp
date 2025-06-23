#include"Brain.hpp"

/*
 * デフォルトコンストラクタ
 */
Brain::Brain() {
	std::cout << "Brain " << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

/*
 * コンストラクタ
 */
Brain::Brain(const std::string &ideas) {
	std::cout << "Brain " << " コンストラクタが呼ばれました" << std::endl;
	for (int i = 0; i < NUM_IDEAS; i++)
		_ideas[i] = ideas;
}

/*
 * コピーコンストラクタ
 */
Brain::Brain(const Brain& copy) {
	std::cout << "Brain " << " コピーコンストラクタが呼ばれました" << std::endl;
	*this = copy;
}

/*
 * コピー代入演算子 (A copy assignment operator overload.)
 */
Brain &Brain::operator=(const Brain& copy) {
	std::cout << "Brain " << " コピー代入演算子が呼ばれました" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < NUM_IDEAS; i++)
			_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

/*
 * デストラクタ
 */
Brain::~Brain() {
	std::cout << "Brain " << " デストラクタが呼ばれました" << std::endl;
}


// ↑↑↑ Orthodox Canonical Form --------------------------------------
