#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main()
{
    Animal *objectAnimal = new Animal;;
    objectAnimal->callOut();

    delete objectAnimal;
    objectAnimal = nullptr;

    cout<<"\n"<<endl;

    Dog *objectDog = new Dog;
    objectDog->callOut();

    delete objectDog;
    objectDog = nullptr;
    return 0;
}
