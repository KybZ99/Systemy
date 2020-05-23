#include <iostream>
#include "prostokat.h"

using namespace std;

Prostokat::Prostokat(int a, int h)
{
    this->a=a;
    this->h=h;


}
Prostokat::~Prostokat()
{

}

void Prostokat::wczytaj()
{
    cout<<"Podaj podstawe: "<<endl;
    cin>>a;
    cout<<"Podaj wysokosc: "<<endl;
    cin>>h;

}

void Prostokat::wyswietl()
{
    pole=a*h;
    cout<<"Pole prosotkata wynosi: "<<pole<<endl;

}
