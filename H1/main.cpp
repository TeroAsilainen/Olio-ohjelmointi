#include <iostream>

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);

int retSum(int, int);
float retDiv(int, int);

int main()
{
    int a, b;
    cout << "Anna luku a: " << endl;
    cin >> a;
    cout << "Anna luku b: " << endl;
    cin >> b;
    cout << fixed;
    cout.precision(2);
    calcSum(a, b);
    calcDiv(a, b);

    cout << "Summa: " << retSum(a, b) << endl;
    cout << "Osamaara: " << retDiv(a, b) << endl;

    return 0;
}

void calcSum(int num1, int num2){
    int summa;
    summa = num1 + num2;
    cout << "Summa: " << summa << endl;
}

void calcDiv(int num1, int num2){
    float osamaara;
    if(num2==0){
        cout << "Jakaja ei saa olla 0!" << endl;
    } else {
        osamaara = ( ((float) num1) / ((float) num2) );
        // cout << fixed;
        // cout.precision(2);
        cout << "Osamaara: " << osamaara << endl;
    }
}

int retSum(int num1, int num2){
    int summa2;
    summa2 = num1 + num2;
    return summa2;
}

float retDiv(int num1, int num2){
    float osamaara;
    if(num2==0){
        cout << "Jakaja ei saa olla 0!" << endl;
        return 0;
    } else {
        osamaara = ( ((float) num1) / ((float) num2) );
        return osamaara;
    }
}
