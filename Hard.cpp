#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main() {
    double x, y, a, b, c, rez;
    cout << "Введите x произвольное число: ";
    while (!(cin >> a)) {
        cout << "Вы ввели не число";
        return 0;
    }
    cout << "Введите y произвольное число: ";
    while (!(cin >> b)) {
        cout << "Вы ввели не число";
        return 0;
    }
    cout << "Введите z произвольное число: ";
    while (!(cin >> c)) {
        cout << "Вы ввели не число";
        return 0;
    }
    if (a == -b) {
        cout << "Нарушены математические правила";
    }
    else {
        x = abs(a - b) * (1 + (pow(sin(c), 2) / sqrt(a + b)));
        y = exp(abs(a - b)) + (a / 2);
        rez = pow(b, pow(abs(a), (1.0 / 3))) + pow(cos(b), 3) * (x / y);
        cout << "b = " << rez;
    }
    return 0;
}