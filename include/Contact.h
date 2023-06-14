#ifndef CONTACT_H
#define CONTACT_H


class Contact: Persoana
{
    Persoana pers;
    multiset<Telefon> telefoane;

    public:
        Contact();
        virtual ~Contact();
        Contact(Persoana, string, string, multiset<Telefon>);
        void insertNr();
        void afisare();
        Contact&operator=(const Contact&);
    protected:

    private:
};

#endif // CONTACT_H
