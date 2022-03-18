#include <iostream>
#include <vector>
using namespace std;

void fill_massbt(double (&barr)[5][5], double (&tarr)[5][5], double (&arr)[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (i == k  or i > k)
                barr[i][k] = arr[i][k];
            else
                barr[i][k] = 0;
        }
        for (int k = 0; k < 5; k++)
        {
            if (i < k)
                tarr[i][k] = arr[i][k];
            else
                tarr[i][k] = 0;
            if (i == k)
                tarr[i][k] = 1;
        }
    }
}

void show_mass(double(&arr)[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{   
    setlocale(0, "ru");
    vector<double> c;
    c.resize(5);
    c = { -0.14, -0.95, -0.49, 0.49, -0.05 }; //вектор с решение

    double arr[5][5] = {
     {0.3,0.37,0.99,0.57,-0.43}, //матрица
     {0.54,0.33,0.49,0.42,-0.32,},
     {0.73,-0.97,-0.92,-0.59,0.78,},
     {0.39,0.85,-0.64,-0.77,0.91,},
     {0.98,-0.19,0.29,-0.89,-0.59,} };

    double barr[5][5];
    double tarr[5][5];
    fill_massbt(barr, tarr, arr);
    cout << "Матрица Б:" << endl;
    show_mass(barr);
    cout << "Матрица T:" << endl;
    show_mass(tarr);


};


