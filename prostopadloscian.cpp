#include "prostopadloscian.h"
#include <iostream>

using namespace std;

Prostopadloscian::Prostopadloscian(int a,int b,int h)
{
    this->a=a;
    this->b=b;
    this->h=h;

}

Prostopadloscian::~Prostopadloscian()
{

}

void Prostopadloscian::wczytaj()
{
    cout<<"Podaj a: "<<endl;
    cin>>a;
    cout<<"Podaj b: "<<endl;
    cin>>b;
    cout<<"Podaj h:"<<endl;
    cin>>h;

}

void Prostopadloscian::wyswietl()
{
    pole=a*b*h;
    objetosc=2*a*b+2*a*h+2*b*h;
    cout<<"Pole prostopadloscianu :"<<pole<<endl;
    cout<<"Objetosc prostopadloscianu: "<<objetosc<<endl;

}
