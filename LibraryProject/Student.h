#pragma once
#include <string>
#include <iostream>
#include "Cititori.h"

using namespace std;

class Student :
	public Cititori
{
public:
	string NumeStudent;
	int CartiImprumutate;

	void Student_method();

	Student();
	~Student();
	string getTitlu()
	{
		Librărie::getTitlu();
	}
};