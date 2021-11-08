#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;
void deystvie(double a,double b) {
    char dey;
    cin >> dey;
    double otvet;
    switch (dey) {
    case '+':
        otvet = a + b;
        cout << "Ответ: " << otvet << endl;
        break;
    case '-':
        otvet = a - b;
        cout << "Ответ: " << otvet << endl;
        break;
    default:
        cout << "Неверный ввод";
        otvet = 10;
        break;
    }
 
}