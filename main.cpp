#include <iostream>

using namespace std;

int main()
{
    multiset<Telefon, Contact> tel;

    for (int Inceput = tel.begin(); Inceput != tel.end(); Inceput++){
        for(int Sfarsit = tel.begin(); Sfarsit!= tel.end(); Sfarsit++)
        {
            if(strcmp(tel.Inceput->getPrefix(), 40) || strcmp(tel.Inceput->getPrefix(), 33))
                cout<<"Merge";

        }


    return 0;
}
