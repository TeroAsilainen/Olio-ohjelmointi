#include "car.h"

void Car::printData()
{
    cout<<"Merkki: "<<brand<<"\tMalli: "<<model<<"\tVuosimalli: "<<yearModel<<endl;
}

Car::Car(string newBrand, string newModel, int newYearModel) {
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}
