#pragma once
#include <string>
#include <iostream>
#include <stdio.h>

//動物クラス
class Animal final
{
public:
	//コンストラクタの宣言
	Animal();

	Animal(const char* name, int footNum);

public:
	std::string name_ = {};
	int	 footNum_ = 0;
};


