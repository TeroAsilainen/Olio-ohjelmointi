#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    Car objectCar;
    objectCar.setBrand("Nissan");
    objectCar.setModel("Qashqai");
    objectCar.setYearModel(2014);
    objectCar.printData();

    Rectangle *objectRectangle = new Rectangle;
    objectRectangle->setHeight(5);
    objectRectangle->setWidth(3);
    cout<<endl;
    cout<<"Suorakulmion pinta-ala: "<<objectRectangle->getArea()<<endl;
    cout<<"Ymparysmitta: "<<objectRectangle->getCircum()<<endl;

    delete objectRectangle;
    objectRectangle = nullptr;

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Tero Asilainen");
    objectStudent->setStudentNumber(12345);
    objectStudent->setAverage(4.6);
    cout<<endl;
    cout<<"Nimi: "<<objectStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objectStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objectStudent->getAverage()<<endl;
    return 0;
}
