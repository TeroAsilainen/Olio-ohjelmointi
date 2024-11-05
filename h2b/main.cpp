#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar0("Nissan", "Qashqai", 2014);
    Car objCar1("Volvo", "S40", 2004);
    Car objCar2("Lada", "Vaz", 2003);

    carList.push_back(objCar0);
    carList.push_back(objCar1);
    carList.push_back(objCar2);

    cout<<"Autolistan toinen auto:"<<endl;
    carList[1].printData();

    cout<<"\nKaikkien autojen tiedot:"<<endl;
    for(int i=0; i < carList.size(); i++){
        carList[i].printData();
    }
    return 0;
}
