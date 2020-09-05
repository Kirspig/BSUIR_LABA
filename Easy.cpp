#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double x, y, a, z1, z2;
    cout << "Введите произвольное число: ";
    while (!(cin >> a)) {
        cout << "Вы ввели не число";
        return 0;
    }
    x = (sin(4 * a)) / (1 + cos(4 * a));
    y = (cos(2 * a)) / (1 + cos(2 * a));
    z1 = x * y;
    z2 = cos(1.5 * M_PI - a) / sin(1.5 * M_PI - a);
    cout << z1 << " = " << z2;
    return 0;
}
