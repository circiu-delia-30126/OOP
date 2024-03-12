#pragma once
#include <string>
#include "Librărie.h"

using namespace std;

class Cititori :
	public Librărie

{

protected:
	int CodCititor;
public:
	int NoiCititori;
	bool MembruActiv;
	void Cititori_method();

	Cititori();
	~Cititori();
};
