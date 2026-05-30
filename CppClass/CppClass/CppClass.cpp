#include "Character.h"
#include <stdio.h>
#include <string>
#include <iostream>


int main()
{
	Character myCharacter;
	Character myCharacter1;

	Character* myClassStatus = &myCharacter;
	myClassStatus->printStatus();
	Character* myClassUpdate = &myCharacter1;
	myClassUpdate->StatusUpdate();

}


