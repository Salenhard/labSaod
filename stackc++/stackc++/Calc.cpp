#include <iostream>
#include "Calc.h"
using namespace std;
void Calc::enter(double num)
{
    S.push(num);
}

bool Calc::getTwoOperands(double& opnd1, double& opnd2)
{
    if (S.stackEmpty())
    {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd1 = S.pop();
    if (S.stackEmpty())
    {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd2 = S.pop();
    return true;
}

void Calc::compute(char op)
{
    bool result;
    double operand1, operand2;
    result = getTwoOperands(operand1, operand2);
    if (result == true)
        switch (op)
        {
        case '+': S.push(operand2 + operand1);
            break;
        case '-': S.push(operand2 + operand1);
            break;
        case '*': S.push(operand2 + operand1);
            break;
        case '/': if (operand1 == 0.0) {
            cerr << "Деление на ноль" << endl;
            S.clearStack();
        }
                else
            S.push(operand2 / operand1);
            break;
        case '^': S.push(pow(operand2, operand1));
            break;
        }
    else
        S.clearStack();
}

Calc::Calc()
{
}

void Calc::run()
{
    char c;
    double newoperand;
    while (cin >> c, c != '=') {
        switch (c)
        {
        case'+':
        case'-':
        case'*':
        case'/':
        case'^':
            compute(c);
            break;
        default:
            cin.putback(c);
            cin >> newoperand;
            enter(newoperand);
            break;
        }
    }
    if (!S.stackEmpty())
        cout << S.peek() << endl;
}

void Calc::clear()
{
    S.clearStack();
}
