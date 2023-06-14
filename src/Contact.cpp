#include "Contact.h"
#include "Persoana.h"
#include "iostream"
#include <string>
#include <string.h>

using namespace std;

Contact::Contact()
{
    pers = NULL;
    telefoane.insert(Telefon);
}

Contact::~Contact()
{
    delete [] this->pers;
}

Contact::Contact(Persoana pers, string numePersoana, string adresa, multiset<Telefon>telefoane):Perosana(numePersoana, adresa)
{
    this->telefoane=telefoane;
}

Contact &Contact::operator=(const Contact c)
{
    if(this != &c)
    {
        this->telefoane = c.telefoane;

        if(this->pers !=NULL)
        {
            pers=c.pers;
        }
    }

    return *this;
}

void Contact::insertNr(Telefon t)
{
    this->telefoane.insert(t);
}

void Contact::afisare()
{
    cout
}
