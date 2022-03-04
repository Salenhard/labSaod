#include <iostream>
#include "Logic.h"
using namespace std;


int main()
{
    int a;
    int b;
    int n;
    cin >> n;
    double* x = new double[n];
    mass::fill_rand(x, n);
    cout << mass::show(x, n);
    cout << endl << "Max = " << mass::maxfind(x, n) << endl;
    cout << "Sum = " << mass::sum(x, mass::find_last_pos(x,n)) << endl;
    cout << "Input range [a,b]:" << endl;
    cin >> a;
    cin >> b;
    mass::text_out(x, n, a, b);
    mass::delinrange(x, n, a, b);
    mass::sort(x, n);
    cout << "Sorted massive:" << endl;
    cout << mass::show(x, n);

    delete[]x;
}
