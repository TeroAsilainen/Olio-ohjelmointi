#include "car.h"
#include <iostream>
using namespace std;

Car::Car() {}

void Car::printData()
{
    cout<<"Valmistaja: "<<brand<<endl;
    cout<<"Malli: "<<model<<endl;
    cout<<"Vuosimalli: "<<yearModel<<endl;
}

void Car::setBrand(string newBrand)
{
    brand = newBrand;
}

void Car::setModel(string newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
