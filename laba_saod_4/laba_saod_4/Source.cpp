#include "Header.h"
#include <iostream>
#include <string>
#include "Logic.h"
#include <fstream>

void logic::fill_mass(int* x, int n) {									// заполнение массива 
	if (n > 0)
		for (int i = 0; i < n; i++){				
			std::cout << "Input x[" << i + 1 << "]: ";			
			std::cin >> x[i];		
			while (x[i] > 3 or x[i] < 0) {
				std::cout << "Input x[" << i + 1 << "]: ";
				std::cin >> x[i];
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

int logic::sortnte(int* x, int n) {					// сортировка от текущего элемента к концу массива
	int count = 0;
	int tmp;
	for(int i = 0; i < n; i++) {				//цикл от 0 до конца массива
		for(int k = i; k < n; k++){				// цикл от текущего элемента i до конца цикла
			if (x[i] > x[k])					// если i элемент больше k то меняет их местами i это начало отсчёта k элемента
			{
				swap(x[i], x[k]);
				count++;						// увеличение кол-ва замен
			}
		}
	}
	return count;								// вывод кол-ва замен
}

int logic::sortetn(int* x, int n) {				// сортировка от конца массива к текущему элементу
	int count = 0;
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int k = n - 1; k > i; k--) {
			if (x[i] > x[k])						// если i элемент больше k то меняет их местами i это начало отсчёта k элемента
			{
				swap(x[k], x[i]);
				count++;							// увеличение кол-ва замен
			}
		}
	}
	return count;									// вывод кол-ва замен
}	

int logic::sort(int* x, int n) {						// оптимальная сортировка массива
	int* c;
	c = new int[n];										// создаю новый массив чтобы проверить кол-во замен
	fill_mass(x, n, c);									// заполнение текущ. массива исходным массивом
	if (sortnte(c, n) < sortetn(c, n)) {				// проверка в каком из алгоритмов меньше замен
		delete[] c;										
		return sortnte(x, n);
	}
	else {
		delete[] c;
		return sortetn(x, n);
	}
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