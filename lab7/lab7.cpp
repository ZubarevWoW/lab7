#include <iostream>

using namespace std;

double sr(double a, double b)
{
    return 2 / (1 / a + 1 / b);
}

void sort(double* a1, double* b1, double* c1) { // сортировка чисел
    double a = *a1, b = *b1, c = *c1;
    if (a < b) {
        if (a < c) {
            if (b < c) {
                *a1 = a;
                *b1 = b;
                *c1 = c;
            }
            else
            {
                *a1 = a;
                *b1 = c;
                *c1 = b;
            }
        }
        else
        {
            *a1 = c;
            *b1 = a;
            *c1 = b;
        }
    }
    else
    {
        if (b < c) {
            if (a > c) {
                *a1 = b;
                *b1 = c;
                *c1 = a;
            }
            else {
                *a1 = b;
                *b1 = a;
                *c1 = c;
            }
        }
        else {
            *a1 = c;
            *b1 = b;
            *c1 = a;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Задача 1" << endl;
    cout << "Введите a - " << endl;
    cin >> a;
    cout << "Введите b - " << endl;
    cin >> b;
    cout << "Среднее гармоническое - " << sr(a, b);
    cout << endl;
    cout << endl;
    cout << "Задача 2" << endl;
    double c, d, e;
    cout << "Введите c: ";  cin >> c; 
    cout << endl;
    cout << "Введите d: ";  cin >> d;
    cout << endl;
    cout << "Введите e: ";  cin >> e;
    cout << endl;
    sort(&c, &d, &e);
    cout << "c - " << c << " d - " << d << " e - " << e << endl;
    system("pause");
    return 0;
}

