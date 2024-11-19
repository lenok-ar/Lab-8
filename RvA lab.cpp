#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string r; 
    cout << "Введите римское число: ";
    cin >> r;
    int a = 0;
    
    for (int i = 0; i < r.length(); i++) {
        if (i < r.length() - 1) {
            if (r[i] == 'I' && r[i + 1] == 'V') {
                a += 4;
                i++;
                continue;
            }
            else if (r[i] == 'I' && r[i + 1] == 'X') {
                a += 9;
                i++;
                continue;
            }
            else if (r[i] == 'X' && r[i + 1] == 'L') {
                a += 40;
                i++;
                continue;
            }
            else if (r[i] == 'X' && r[i + 1] == 'C') {
                a += 90;
                i++;
                continue;
            }
            else if (r[i] == 'C' && r[i + 1] == 'D') {
                a += 400;
                i++;
                continue;
            }
            else if (r[i] == 'C' && r[i + 1] == 'M') {
                a += 900;
                i++;
                continue;
            }
        }

        if (r[i] == 'M') {
            a += 1000;
        }
        else if (r[i] == 'D') {
            a += 500;
        }
        else if (r[i] == 'C') {
            a += 100;
        }
        else if (r[i] == 'L') {
            a += 50;
        }
        else if (r[i] == 'X') {
            a += 10;
        }
        else if (r[i] == 'V') {
            a += 5;
        }
        else if (r[i] == 'I') {
            a += 1;
        }
    }
    cout << "Конвертация римских чисел в арабские = " << a << endl;
    return 0;
}
