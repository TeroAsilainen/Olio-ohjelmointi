#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string newName) : Chef(newName) {
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
