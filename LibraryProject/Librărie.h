#include <iostream>
#include <string>
#include "InfoSecuritate.h"

using namespace std;


class Librărie{
private:
	int NrPagini;
	int StocCarti;
	int Cod;
	string NumeAutor;
	string Titlu;
protected:
	string AdresaCladire;
	int	   CodCladire;

	InfoSecuritate cont;
public:
	int TotalCarti;
	int CartiImprumutate;

	void ContProtejat();

	void setNrPagini(int);
	int getNrPagini();

	void setStocCarti(int);
	int getStocCarti();

	void setCod(int);
	int getCod();

	void setNumeAutor(string);
	string getNumeAutor();

	void setTitlu(string);
	string getTitlu();

	//static int getNumarCarti();

	//Librărie();
	//Librărie(int NrPagini);
	//Librărie(int NrPagini, int StocCarti);
	//Librărie(int NrPagini, int StocCarti, int Cod);
	//Librărie(int NrPagini, int StocCarti, int Cod, string Titlu);
	//~Librărie();
};