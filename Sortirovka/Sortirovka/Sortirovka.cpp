// Sortirovka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
	ofstream f;// файловая переменная для записи в файл
	unsigned stime[5];// массив для время начала выполнения сортировки
	unsigned etime[5];// массив для конец выполнения сортировки
	f.open("f.txt");// открытие и создание файла, если его нет в папке
	cout << "Введите длину массива n: ";
	cin >> n;
	f << " Длина массива n: "<<n<< endl;
	double* a = new double[n];// выделяем память
	double* b = new double[n];// выделяем под копию массива
	//cout << "Заполнение вручную:\n";
	//zaphand(a,n);
	sort::fillMassRand(a,n);
	cout << "Массив:\n";
	sort::printMass(a, n);		// вывод на экран
	f << "Массив:\n";	// вывод в файл
	sort::fPrintMas(a,n,f);	 // вывод массива в файл
	sort::copyMass(a, b, n); //  сохраняем массив а в массиве в для послдующей перезаписи для всех сортировок

	//ПЕРВАЯ СОРТИРОВКА
	cout << "\n\n Сортировки: \n";
	f << "\n\n Сортировки: \n";
	stime[0] = clock();
	sort::bubble(a, n);// сортировка пузырьком
	etime[0] = clock();
	cout << "\tСортировка массива пузырьком: \n";
	sort::printMass(a, n);
	f << "\tСортировка массива пузырьком: \n";
	sort::fPrintMas(a, n, f);	 // вывод массива в файл
	sort::copyMass(b, a, n);  //  восстанавливаем массив 

	//ВТОРАЯ СОРТИРОВКА
	stime[1] = clock();
	sort::choice(a, n);// сортировка выбором
	etime[1] = clock();
	cout << "\tСортировка массива выбором: \n";
	sort::printMass(a, n);
	f << "\tСортировка массива выбором: \n";
	sort::fPrintMas(a, n, f);	 // вывод массива в файл
	sort::copyMass(b, a, n);  //  восстанавливаем массив 

	//ТРЕТЬЯ СОРТИРОВКА
	stime[2] = clock();
	sort::inserts(a, n);//сортировка вставками
	etime[2] = clock();
	cout << "\tСортировка массива вставками:\n";
	sort::printMass(a, n);
	f << "\tСортировка массива вставками:\n";
	sort::fPrintMas(a, n, f);	 // вывод массива в файл
	sort::copyMass(b, a, n);  //  восстанавливаем массив 
	
	//ЧЕТВЕРТАЯ СОРТИРОВКА
	stime[3] = clock();
	sort::fast(a, 0,n-1);// Быстрая сортировка
	etime[3] = clock();
	cout << "\tБыстрая сортировка :\n";
	sort::printMass(a, n);
	f << "\tБыстрая сортировка :\n";
	sort::fPrintMas(a, n, f);	 // вывод массива в файл
	sort::copyMass(b, a, n);  //  восстанавливаем массив 

	//ПЯТАЯ СОРТИРОВКА
	stime[4]=clock();
	sort::shell(a, n);// сортировка Шелла
	etime[4] = clock();
	cout << "\tСортировка Шелла:\n";
	sort::printMass(a, n);
	f << "\tСортировка Шелла:\n";
	sort::fPrintMas(a, n, f);	 // вывод массива в файл
	sort::copyMass(b, a, n);  //  восстанавливаем массив 

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

	f.close();// закрываем файл
	delete[] a;// удаляем массив
	delete[] b;// удаляем массив
}
