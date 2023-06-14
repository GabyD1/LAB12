#ifndef AGENDA_H
#define AGENDA_H
#include "Contact.h"
#include "Telefon.h"
#include <iostream>
#include <string.h>

class Agenda: public Contact
{
    string *nume;
    Contact contact1;
    set<Contact> contacte;

    public:
        Agenda();
        virtual ~Agenda();
        Agenda(string,string,string,multiset<Telefon>telefoane);
        void afisare();
    protected:

    private:
};

#endif // AGENDA_H
