#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog() {
    cout<<"Koira syntyi"<<endl;
}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}


Dog::~Dog(){
    cout<<"Tassa on koira haudattuna"<<endl;
}
