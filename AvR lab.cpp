/***************************
 * Автор: Арестова Е.Е.    *
 * Дата: 18.11.2024         *
 ***************************/

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a;
    string r;
    cout << "Введите арабское число (от 1 до 3999): ";
    cin >> a;

    if (a >= 1 && a <= 3999) {
        while (a >= 1000) {
            r += "M";
            a -= 1000;
        }
        if (a >= 900) {
            r += "CM";
            a -= 900;
        }
        if (a >= 500) {
            r += "D";
            a -= 500;
        }
        if (a >= 400) {
            r += "CD";
            a -= 400;
        }

        while (a >= 100) {
            r += "C";
            a -= 100;
        }
        if (a >= 90) {
            r += "XC";
            a -= 90;
        }
        if (a >= 50) {
            r += "L";
            a -= 50;
        }
        if (a >= 40) {
            r += "XL";
            a -= 40;
        }

        while (a >= 10) {
            r += "X";
            a -= 10;
        }
        if (a >= 9) {
            r += "IX";
            a -= 9;
        }
        if (a >= 5) {
            r += "V";
            a -= 5;
        }
        if (a >= 4) {
            r += "IV";
            a -= 4;
        }

        while (a >= 1) {
            r += "I";
            a -= 1;
        }
        cout << "Результат конверсирования арабского числа в римское = " << r << endl;
    }
    return 0;
}
