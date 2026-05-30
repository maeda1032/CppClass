#include<iostream>
#include<stdio.h>
#include<string>

#pragma once

class Human
{
public:
	Human();

	Human(std::string name, int apple);

	Human(const Human& src);

	~Human();

	std::string name_ = {};
	int			apple_ = 0;
};


