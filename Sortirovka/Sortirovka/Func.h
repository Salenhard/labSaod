#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <locale>
using namespace std;
namespace sort {
	void fillMassRand(double* a, int n);							// заполение массива случайными числами
	void fillMassIn(double* a, int n);							// заполениен вручную
	void printMass(double* a, int n);						// вывод массива на экран
	void fPrintMas(double* a, int n, ofstream& f);			// вывод массива в файл
	void copyMass(double* a, double* b, int n);				// сохраняет массив 1 в массив 2
	void swap(int i, int j, double* a);						// поменять i-ый с j-ым в массиве a
	void bubble(double* a, int n);						// сортировка пузырьком
	void choice(double* a, int n);						// сортировка выбором
	void inserts(double* a, int n);					// сортировка вставками
	void fast(double* a, int first, int last);			// сортировка быстрая  ex: f=0;l=n-1
	void shell(double* a, int n);						// сортировка Шелла
}

