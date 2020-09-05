#define _USE_MATH_DEFINES 
#include<iostream> 
#include<stdio.h> 
#include<math.h> 


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, b, z1, z2;
    cout << "Введите произвольное число: ";
    while (!(cin >> b)) {
        cout << "Вы ввели не число";
        return 0;
    }
    x = (pow(cos((3 / 8.) * M_PI - (b / 4.)), 2));
    y = (pow(cos((11 / 8.) * M_PI + (b / 4.)), 2));
    z1 = (x - y);
    z2 = (sqrt(2) / 2) * sin(b / 2.0);
    cout << z1 << " = " << z2;
    return 0;
}
