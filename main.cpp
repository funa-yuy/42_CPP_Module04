
#include<iostream>

class A {
	public:
		A();
		A& operator=(const A& copy);
		~A();
		std::string	*arr;
};

A::A() {
	arr = new std::string;
	std::cout << "A " << " デフォルトコンストラクタが呼ばれました" << std::endl;
}

A &A::operator=(const A& copy) {
	if (this != &copy)
	{
		delete arr;
		arr = new std::string(*(copy.arr)); //深いコピー
		/* ↓以下の２行だと浅いコピーになる。
		* arr = new std::string; 新しくメモリを確保しているが、
		* arr = copy.arr;		 そこにコピー元のアドレスを入れてるので、結局指す先が同じになる。
		*/
	}
	std::cout << "A " << " コピー代入演算子が呼ばれました" << std::endl;
	return (*this);
}

A::~A() {
	std::cout << "A " << " デストラクタが呼ばれました" << std::endl;
	delete arr;
}

int	main()
{
	A	a1;
	A	a2;

	a2 = a1;
	return 0;
}
