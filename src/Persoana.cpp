#include "Persoana.h"
#include "iostream"
#include "string"
#include <string.h>

Persoana::Persoana()
{
    this->numePersoana = "";
    this->adresa = "";
}


Persoana::Persoana(string numePersoana, string adresa)
{
    for(int i = 0; i<numePersoana.size ; i++)
    {

        this->numePersoana[i] = numePersoana[i];
    }
    for(int i = 0; i<adresa.size; i++)
        this->adresa[i] = adresa[i];
}
