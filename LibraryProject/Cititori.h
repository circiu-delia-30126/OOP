#pragma once

#include <string>
#include "Librarie.h"


using namespace std;

class Cititori : public Librarie {
protected:
    int CodCititor;
public:
    int NoiCititori;
    bool MembruActiv;
    void Cititori_method();

    Cititori();
    ~Cititori();
};
