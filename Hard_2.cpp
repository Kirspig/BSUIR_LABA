#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, x, y, min, max, rez;
    cout << "Введите a: ";
    while (!(cin >> a)) {
        cout << "Такого числа не существует";
        return 0;
    }
    cout << "Введите x: ";
    while (!(cin >> x)) {
        cout << "Такого числа не существует";
        return 0;
    }
    cout << "Введите y: ";
    while (!(cin >> y)) {
        cout << "Такого числа не существует";
        return 0;
    }
    if (x * x < y * y) {
        min = x * x;
    } else {
        min = y * y;
    }
    if (x > y && x > a) {
        max = x;
    } else if (y > x && y > a) {
        max = y;
    } else {
        max = a;
    }
    if (a < 0) {
        rez = min + a;
    } else if (a > 0) {
        rez = abs(x - y) + y * (x + pow(a, 1.5));
    } else {
        rez = max;
    }
    cout << "F = " << rez;
    return 0;
}