#include <iostream>
using namespace std;
#include "Header.h"
#include <ctime>

int main()
{
    unsigned int a, b, c, x;
    cout << "input a and b:";
    cin >> a >> b;
    c = a;
    x = b;
    clock_t start = clock(); 
    cout << "Result: " << logic::cycle(a, b) << endl;
    clock_t end = clock();
    double search = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << search << endl;
    start = clock(); 
    cout << "Result: " << logic::recurs(c, x) << endl;
    end = clock(); 
    search = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time: " << search << endl;
}