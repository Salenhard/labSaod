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

int logic::sortet1(int* x, int n) {					// сортировка не оптимальная bloodtrail
	int count = 0;
	int tmp;
	for(int i = 0; i < n; i++) {
		for(int k = n-1; k > i; k--){
			if (x[i] > x[k])
			{
				tmp = x[k];
				x[k] = x[i];
				x[i] = tmp;
				count++;
			}
		}
	}
	return count;
}
int logic::sort1te(int* x, int n) {					// сортировка не оптимальная bloodtrail
	int count = 0;
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int k = n - 1; k > i; k--) {
			if (x[i] > x[k])
			{
				tmp = x[k];
				x[k] = x[i];
				x[i] = tmp;
				count++;
			}
		}
	}
	return count;
}

void logic::text_out(int* x, int n,int c) {                                           // вывод в текст
	std::ofstream f;
	f.open("Myfile.txt");
	f << "Array: " << mass::show(x, n) << std::endl;
	f << "Count of moves: " << c << std::endl;
	f.close();
}
