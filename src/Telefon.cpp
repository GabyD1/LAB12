#include "Telefon.h"

Telefon::Telefon()
{
    for(int i= 0; i<3; i++)
        this->prefix[i] = 0;
    this->nr = 0;
}

Telefon::~Telefon()
{
    delete [] this->prefix;
}

Telefon::Telefon(char prefix[3], int nr)
{

    for(int i= 0; i<3; i++)
        this->prefix[i] = prefix[i]

    this->nr = nr;
}

char Telefon::getPrefix()
{
    char aux[2];
    for(int i= 1; i<3; i++)
        aux[i-1] = this->prefix;

    return aux;
}

int Telefon::getNumar()
{
    return this->nr;
}
