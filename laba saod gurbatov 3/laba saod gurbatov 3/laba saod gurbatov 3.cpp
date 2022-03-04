#include <iostream>
#include "Header.h"
#include <ctime>

using namespace std;

int main()
{
    unsigned int a, b;
    cout << "input a and b:";
    cin >> a >> b;
    clock_t start = clock(); 
    for (int i = 0; i < 10000; i++) {
        logic::cycle(a, b);
    }
    cout << "Result cycle: " << logic::cycle(a, b) << endl;
    clock_t end = clock();
    double search = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << search << endl;
    start = clock();
    for (int i = 0; i < 10000; i++) {
        logic::recurs(a, b);
    }
    cout << "Result recurs: " << logic::recurs(a, b) << endl;
    end = clock(); 
    search = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << search << endl;
    logic::f_out(a, b);
}