#include "Human.h"


Human::Human()
{
	std::cout << "コンストラクタが呼ばれました" << std::endl;
	name_ = "田中林檎";
	apple_ = 5;
}
Human::Human(std::string name,int apple)
{ 
	name_ = name;
	apple_ = apple;
}

Human::Human(const Human& src)
{
	std::cout << "コピーコンストラクタが呼ばれました" << std::endl;
	name_ = src.name_;
	apple_ = src.apple_;

	std::cout << "名前は" << name_ << "です" << std::endl;
	std::cout << "林檎の数は" << apple_ << "です" << std::endl;
}

Human::~Human()
{
	std::cout << "デストラクタが呼ばれました" << std::endl;

}