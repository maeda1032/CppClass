#include <stdio.h>
#include <string>
#include <iostream>
#pragma once
class Character
{
	std::string name_ = "ç÷ì°";
	int hp_ = 5;
	int attack_ = 10;

public:

	void ChangeStatus(std::string name,int hp,int attack)
	{
		name_ = name;
		hp_ = hp;
		attack_ = attack;
	}

	void printStatus()
	{
		std::cout << "ñºëOÇÕ" << name_ << "Ç≈Ç∑" << std::endl;
		std::cout << "HpÇÕ" << hp_ << "Ç≈Ç∑" << std::endl;
		std::cout << "AttackÇÕ" << attack_ << "Ç≈Ç∑" << std::endl;
	}
	
};
