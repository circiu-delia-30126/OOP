#pragma once
#include <string>
#include "Librărie.h"

using namespace std;

class Angajati :
	public Librărie
{
public:
	int AngajatiNoi;
	bool AngajatiActivi;

	void Angajati_method();

	Angajati();
	~Angajati();

};
