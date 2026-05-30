#include "Character.h"



int main()
{
	Character myCharacter;
	Character myCharacter1;

	myCharacter.ChangeStatus("田中", 5, 6);
	myCharacter1.ChangeStatus("斎藤",15,56);

	myCharacter.printStatus();
	myCharacter1.printStatus();
	
}


