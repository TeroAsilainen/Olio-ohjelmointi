#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chefObj("Gordon Ramsay");
    chefObj.makeSalad();
    chefObj.makeSoup();

    cout<<"\n"<<endl;

    ItalianChef chefObj2("Anthony Bourdain");
    chefObj2.makeSalad();
    chefObj2.makeSoup();
    chefObj2.makePasta();
    cout<<"name of the Italian Chef is "<<chefObj2.getName()<<endl;
    return 0;
}
