#ifndef TELEFON_H
#define TELEFON_H


class Telefon
{
    char prefix[3];
    int nr;

    public:
        Telefon();
        Telefon(char, int);
        virtual ~Telefon();
        char getPrefix();
        int getNumar();
    protected:

    private:
};

#endif // TELEFON_H
