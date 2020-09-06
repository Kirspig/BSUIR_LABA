#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int key, choice;
    double a, b, f=0, x=0, input, rez;
    cout << "Выберите Ф(х):\n1) 2x\n2) x^2\n3) x/3\n";
    while (!(cin >> choice)) {
        cout << "Такой функции не существет";
        return 0;
    }
    if (choice < 1 or choice > 3) {
        cout << "Такой функции не существет";
        return 0;
    }
    else {
        cout << "Введите z: ";
        while (!(cin >> input)) {
            cout << "Такого числа не существует";
            return 0;
        }
        cout << "Введите a: ";
        while (!(cin >> a)) {
            cout << "Такого числа не существует";
            return 0;
        }
        cout << "Введите b: ";
        while (!(cin >> b)) {
            cout << "Такого числа не существует";
            return 0;
        }
        if (input > 0) {
            cout << "   z>0 и ";
            x = 1 / (input * input + 2 * input);
        }
        else {
            cout << "   z<=0 и ";
            x = 1 - input * input * input;
        }
        switch (choice) {
        case 1:
            cout << "ф(х)=2x \n";
            f = 2 * x;
            break;
        case 2:
            cout << "ф(х)=x^2 \n";
            f = x * x;
            break;
        case 3:
            cout << "ф(х)=x/3 \n";
            f = x / 3;
            break;
        }
    }
    if ((input * input + 2 * input) == 0 or (log(abs(x)) + f) == 0) {
        cout << "Нарушены математические правила";
    }
    else {
        rez = (2.5* a * exp(-3 * x) - 4 * b * x * x) / (log(abs(x)) + f);
        cout << "   y = " << rez;
    }
    return 0;
}
