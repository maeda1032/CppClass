#pragma once
// MyClass の定義
class MyClass
{
public:
	// クラスのメンバ関数を宣言と同時に定義する
	void functionA()
	{
		//メンバ変数を利用できる
		valueA = 1;
	}
	
	// 静的メンバ関数
	static void functionB()
	{
		valueB = 10;
	}

	int valueA = 0;
	//静的なメンバ変数
	static inline int valueB;
};

