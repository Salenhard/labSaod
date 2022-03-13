#include "Header.h"
#include <iostream>
#include <string>
#include "Logic.h"
#include <fstream>

void logic::fill_mass(int* x, int n) {								// заполнение массива 
	if (n > 0)														// пока n > 0
		for (int i = 0; i < n; i++){								// цикл от 0 до n размера массива
			std::cout << "Input x[" << i + 1 << "]: ";				// выводит номер эелемента массива
			std::cin >> x[i];										// ввод элемента массива
			while (x[i] > 3 or x[i] < 0) {							// проверка введенего числа 3 < x < 0 если выполяется условие то просит ввести число заново
				std::cout << "Input x[" << i + 1 << "]: ";			// выводит номер эелемента массива
				std::cin >> x[i];									// ввод элемента массива
			}
		}
	else
		throw std::invalid_argument("Size of array must be more then 0!");
}

void logic::swap(int& a, int& b) {						//меняет местами знач. переменных 
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int logic::sort(int* x, int n) {				// сортировка от конца массива к текущему элементу
	int count = 0;								// кол-во перемещений
	for (int i = 0; i < n; i++) {				// цикл от 0 до конца массива
		for (int k = n - 1; k > i; k--) {			// цикл от конца до текущего элемента
			if (x[i] > x[k]) {						// если i элемент больше k то меняет их местами i это начало отсчёта k элемента
				swap(x[k], x[i]);					// меняет элементы местами
				count++;							// увеличение кол-ва замен
			}
		}
	}
	return count;									// вывод кол-ва замен
}	

void logic::text_out(int* x, int n,int c) {                                           // вывод в текст
	std::ofstream f;
	f.open("Myfile.txt");
	f << "Array: " << mass::show(x, n) << std::endl;
	f << "Count of moves: " << c << std::endl;
	f.close();
}

void logic::fill_mass(int* x, int n, int* c)             // заполнение массива другим массивом
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] != 0) {
			c[k] = x[i];
			k++;
		}
	}
}