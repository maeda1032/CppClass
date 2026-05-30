#pragma once
class Character
{
	std::string name;
	int hp;
	int attack;
public:
	void StatusUpdate()
	{
		name = "ç÷ì°";
		hp = 5;
		attack = 10;
	}

	void printStatus()
	{
		std::cout << "ñºëOÇÕ" << name << "Ç≈Ç∑" << std::endl;
		std::cout << "HpÇÕ" << hp << "Ç≈Ç∑" << std::endl;
		std::cout << "AttackÇÕ" << attack << "Ç≈Ç∑" << std::endl;
	}
	
};
