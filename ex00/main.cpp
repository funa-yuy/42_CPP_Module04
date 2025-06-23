#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	{
		//基底ポインタに、基底オブジェクトを代入する
		const Animal* meta = new Animal();
		//基底ポインタに、派生オブジェクトを代入する
		const Animal* j = new Dog();
		//基底ポインタに、派生オブジェクトを代入する
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // Catクラスの makeSound() が呼ばれる（仮想関数を使用）
		j->makeSound(); // Dogクラスの makeSound() が呼ばれる（仮想関数を使用）
		meta->makeSound();

		delete meta;
		delete j;//派生クラスのデストラクタが呼ばれる
		delete i;//派生クラスのデストラクタが呼ばれる
	}

	/* Wrong */
	{
		//基底ポインタに、基底オブジェクトを代入する
		const WrongAnimal* meta = new WrongAnimal();
		//基底ポインタに、派生オブジェクトを代入する
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // WrongAnimalクラスの makeSound() が呼ばれてしまう
		meta->makeSound();

		delete meta;
		delete i;
	}
	return 0;
}
