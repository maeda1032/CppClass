#include "MyClass.h"
#include "Animal.h"


int main()
{
	{
		//アニマルクラスのインスタンスを作成する
		object::Animal animal;

		object::Animal animal2("猛獣", 2);

		std::cout << "スコープを抜ける" << std::endl;
	}
}


