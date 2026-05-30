#include "Animal.h"




// コンストラクタの定義
Animal::Animal()
{
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	footNum_ = 4;
}

// 引数コンストラクタの定義
Animal::Animal(const char* name, int footNum)
{
	std::cout << "引数付きコンストラクタが呼ばれました" << std::endl;
	name_ = "動物";
	footNum_ = 4;
}

// デストラクタの定義
Animal::~Animal()
{
	std::cout << "デストラクタが呼ばれました" << std::endl;

	name_ = "破棄済み";
	footNum_ = 0;
}



