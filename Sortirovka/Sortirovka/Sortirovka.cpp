#include <iostream>
#include <math.h>
#include <locale>
#include <fstream>
#include <ctime>
#include "Func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL,"rus");
	int n;
	ofstream f;
	unsigned stime[5];
	unsigned etime[5];
	f.open("f.txt");
	cout << "Введите длину массива n: ";
	cin >> n;
	f << " Длина массива n: "<<n<< endl;
	double* a = new double[n];
	double* b = new double[n];

	sort::fillMassRand(a,n);
	cout << "Массив:\n";
	sort::printMass(a, n);
	f << "Массив:\n";	
	sort::fPrintMas(a,n,f);	
	sort::copyMass(a, b, n);

	cout << "\n\n Сортировки: \n";
	f << "\n\n Сортировки: \n";
	stime[0] = clock();
	sort::bubble(a, n);
	etime[0] = clock();
	cout << "\tСортировка массива пузырьком: \n";
	sort::printMass(a, n);
	f << "\tСортировка массива пузырьком: \n";
	sort::fPrintMas(a, n, f);	
	sort::copyMass(b, a, n);  

	stime[1] = clock();
	sort::choice(a, n);
	etime[1] = clock();
	cout << "\tСортировка массива выбором: \n";
	sort::printMass(a, n);
	f << "\tСортировка массива выбором: \n";
	sort::fPrintMas(a, n, f);
	sort::copyMass(b, a, n);

	stime[2] = clock();
	sort::inserts(a, n);
	etime[2] = clock();
	cout << "\tСортировка массива вставками:\n";
	sort::printMass(a, n);
	f << "\tСортировка массива вставками:\n";
	sort::fPrintMas(a, n, f);
	sort::copyMass(b, a, n); 
	
	stime[3] = clock();
	sort::fast(a, 0,n-1);
	etime[3] = clock();
	cout << "\tБыстрая сортировка :\n";
	sort::printMass(a, n);
	f << "\tБыстрая сортировка :\n";
	sort::fPrintMas(a, n, f);	
	sort::copyMass(b, a, n); 

	stime[4]=clock();
	sort::shell(a, n);
	etime[4] = clock();
	cout << "\tСортировка Шелла:\n";
	sort::printMass(a, n);
	f << "\tСортировка Шелла:\n";
	sort::fPrintMas(a, n, f);
	sort::copyMass(b, a, n); 

	cout << "Время работы Сортировки пузырьком = "<< etime[0] -stime[0]<<" млс\n";
	cout << "Время работы Сортировки выбором = " << etime[1] - stime[1] << " млс\n";
	cout << "Время работы Сортировки вставками = " << etime[2] - stime[2] << " млс\n";
	cout << "Время работы Быстрой сортировки = " << etime[3] - stime[3] << " млс\n";
	cout << "Время работы Сортировки Шелла = " << etime[4] - stime[4] << " млс\n";

	f << "Время работы Сортировки пузырьком = " << etime[0] - stime[0] << " млс\n";
	f << "Время работы Сортировки выбором = " << etime[1] - stime[1] << " млс\n";
	f << "Время работы Сортировки вставками = " << etime[2] - stime[2] << " млс\n";
	f << "Время работы Быстрой сортировки = " << etime[3] - stime[3] << " млс\n";
	f << "Время работы Сортировки Шелла = " << etime[4] - stime[4] << " млс\n";

	f.close();
	delete[] a;
	delete[] b;
}
