#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, a, z1, z2, pi;
    cout << "Введите произвольное число: ";
    while (!(cin >> a)) {
        cout << "Вы ввели не число";
        return 0;
    }
    if (cos(4 * a) == -1 or cos(2 * a) == -1 or sin(1.5 * M_PI - a) == 0) {
        cout << "Нарушены математические правила";
    }
    else {
        x = (sin(4 * a)) / (1 + cos(4 * a));
        y = (cos(2 * a)) / (1 + cos(2 * a));
        z1 = x * y;
        z2 = cos(1.5 * M_PI - a) / sin(1.5 * M_PI - a);
        cout << z1 << " = " << z2;
    }
    return 0;
}
