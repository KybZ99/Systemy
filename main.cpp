#include <iostream>
#include "prostokat.h"
#include "prostopadloscian.h"

using namespace std;

int main ()
{
    Prostokat k;
    k.wczytaj();
    k.wyswietl();

    cout<<"-------------------------"<<endl;

    Prostopadloscian p;
    p.wczytaj();
    p.wyswietl();

}
