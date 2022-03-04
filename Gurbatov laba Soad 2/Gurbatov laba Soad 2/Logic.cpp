#include <iostream>
#include "Logic.h"
#include <fstream>
#include <String>
#include <time.h>
using namespace std;

    string mass::show(double* matr, int n) {                            // возвращает массив в виде строки
        string str = "";
        for (int i = 0; i < n; i++) {
            str += to_string(matr[i]) + " ";
        }
        return str;
    }

    int mass::maxfind(double* x, int n) {                                   // находит максимальное число в массиве
        int max = x[0];
        for (int i = 1; i < n; i++) {
            if (max < x[i])
                max = x[i];
        }
        return max;
    }

    int mass::find_last_pos(double* x, int n) {                             // находит последнее положительное число
        for (int i = n - 1; i >= 0; i--) {
            if (x[i] > 0) {
                return i;
                break;
            }
        }
    }
    int mass::sum(double* x, int l) {                                       // выводит сумму чисел массива до l - элемента
        int sum = 0;
        for (int i = 0; i <= l; i++)
            sum += x[i];
        return sum;
    }

    void mass::sort(double* x, int n) {                                   // сортирует массив
        double* c = new double[n];
        fill_num(c, n, 0);
        fill_mass(x, n, c);
        fill_num(x, n, 0);
        fill_mass(c, n, x);
        delete[]c;
    }

    void mass::fill_num(double* x, int n, double num) {                 // заполн€ет массив 1 числом
        for (int i = 0; i < n; i++)
        {
            x[i] = num;
        }
    }

    void mass::fill_mass(double* x, int n, double* c)             // заполн€ет массив другим массивом игнорирую 0
    {
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] != 0) {
                c[k] = x[i];
                k++;
            }
        }
    }

    void mass::delinrange(double* x, int n,double a, double b)                   // удал€ет элементы массива вход€щие в диапозон
    {
        for (int i = 0; i < n; i++) {
            if (fabs(x[i]) >= a and fabs(x[i]) <= b) {
                x[i] = 0;
            }
        }
    }

    void mass::fill(double* x, int n)                                       // заполнение массива врунчную
    {
        for (int i = 0; i < n; i++)
            cin >> x[i];
    }

    void mass::fill_rand(double* x, int n)                                      // заполнение массива рандомными числами
    {
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            x[i] = ( 500000 + rand() %  (1000000 - 0 + 1));
            x[i] /= 1000;
        }
    }

    void mass::text_out(double* x, int n, double a, double b)                                           // вывод в текст
    {
        ofstream f;
        f.open("Myfile.txt");
        f << "ћассив:" << endl << show(x, n) << endl;
        f << "ћаксимум: " << to_string(maxfind(x, n)) << endl;
        f << "—умма: " << to_string(sum(x, find_last_pos(x,n))) << endl;    
        delinrange(x, n, a, b);
        f << "ƒиапозон" << "a = " << a << "b = " << b << endl;
        sort(x, n);
        f << "ћассив:" << endl << show(x, n) << endl;
    }