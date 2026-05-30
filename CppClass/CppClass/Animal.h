#pragma once
#include <string>
#include <iostream>
#include <stdio.h>

namespace object {

	//動物クラス
	class Animal final
	{
	public:
		// デストラクタの宣言
		~Animal();

	public:
		//コンストラクタの宣言
		Animal();

		Animal(const char* name, int footNum);

	public:
		std::string name_ = {};
		int	 footNum_ = 0;
	};

}


