#include <iostream>

#include "Calc.h"
#include "Stack.h"
#include "Logic.h"
using namespace std;
int main()
{
    int num1, num2;
    string str;
    cout << "Input word:";
    cin >> str;
    if (polindrom(str) == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin >> num1 >> num2; 
    cout << "Number " << num1 << " in " << num2 << " base: ";
    convert(num1,num2);
    Calc A;
    cout << "Calculator: ";
    A.run();
}

