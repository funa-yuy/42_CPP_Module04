#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"

// ```bash
// valgrind --leak-check=full ./Animal
// ```
int main()
{
	{
		// const Animal* j = new Animal();←Animalクラスをインスタンス化できない
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl << "--- 半分Dogクラスで、半分Catクラス ---" << std::endl;
	{
		const int size = 4;
		const Animal* zoo[size];

		for (int i = 0; i < size; i++)
		{
			if (i < size/2)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
		}
		for (int i = 0; i < size; i++) { //ディープコピーではない場合、ダブルfreeが行われてしまう
			delete zoo[i];
		}
	}
	std::cout << std::endl << "--- コピーコンストラクタのディープコピー確認 ---" << std::endl;
	{
		Dog original;
		Dog copy(original);

		original.makeSound();
		copy.makeSound();
	}
	std::cout << std::endl << "--- コピー代入演算子のディープコピー確認 ---" << std::endl;
	{
		Cat cat1;
		Cat cat2;

		cat2 = cat1;// コピー代入演算子を呼び出し

		cat1.makeSound();
		cat2.makeSound();
	}
	return 0;
}
