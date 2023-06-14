#include "Agenda.h"

Agenda::Agenda()
{
    nume = "";
}

Agenda::Agenda(string nume, string numePersoana, string adresa, multiset<Telefon>telefoane):Contact(numePersoana,adresa,telefoane)
{
    this->nume=nume;
}

void Agenda::afisare()
{

    cout<<"Nume"<<this->afisare;
}
