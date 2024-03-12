#include "Librărie.h"
#include "InfoSecuritate.h"
#include "Cititori.h"

#include <iostream>
#include <string>


using namespace std;

void Librărie::setNrPagini(int NrPagini)
{
	this->NrPagini = NrPagini;
}
int Librărie::getNrPagini()
{
	return this->NrPagini;
}

void Librărie::setStocCarti(int StocCarti)
{
	this->StocCarti = StocCarti;
}
int Librărie::getStocCarti()
{
	return this->StocCarti;
}

void Librărie::setCod(int Cod)
{
	this->Cod = Cod;
}
int Librărie::getCod()
{
	return this->Cod;
}

void Librărie::setNumeAutor(string NumeAutor)
{
	this->NumeAutor = NumeAutor;
}
string Librărie::getNumeAutor()
{
	return this->NumeAutor;
}

void Librărie::setTitlu(string Titlu)
{
	this->Titlu = Titlu;
}
string Librărie::getTitlu()
{
	return this->Titlu;
}

void Librărie::ContProtejat()
{
	cont.setCont();
}
