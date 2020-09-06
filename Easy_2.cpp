#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int key;
    double x, input, rez;
    cout << "Введите z: ";
    while (!(cin >> input)) {
        cout << "Такого числа не существует";
        return 0;
    }
    if (input > 0) {
        cout << "z >0 \n";
            x = 1 / (input * input + 2 * input) ;
    }
    else {
        cout << "z <=0 \n";
            x = 1 - input * input * input;
    }
    if ((input * input + 2 * input) == 0 or (log(abs(x)) + x) == 0) {
        cout << "Нарушены математические правила";
    }
    else {
        rez = (2 * exp(-3 * x) - 4 * x * x) / (log(abs(x)) + x);
        cout << "y = " << rez;
    }
    return 0;
}
