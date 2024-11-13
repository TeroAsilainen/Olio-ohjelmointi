#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {
    cout<<"Elain on oleva"<<endl;
}

void Animal::callOut()
{
    cout<<"Elain aantelee."<<endl;
}

Animal::~Animal(){
    cout<<"Elain ei ole enaa"<<endl;
}
