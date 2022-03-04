#pragma once
namespace mass {
	std::string show(double* matr, int n);							// возвращает массив в виде строки
	std::string show(int* matr, int n);
	int maxfind(double* x, int n);									// находит максимальное число в массиве
	int sum(double* x, int l);										// выводит сумму чисел массива до l - элемента
	void sort(double* x, int n);									// сортировка массива
	void fill(double* x, int n);									// заполнение массива врунчную
	void fill_rand(double* x, int n);								// заполнение массива рандомными числами
	void text_out(double* x, int n, double a, double b);								// вывод в текст
	void delinrange(double* x, int n, double a, double b);				// удаляет элементы массива входящие в диапозон
	int find_last_pos(double* x, int n);							// находит последнее положительное число
	void fill_num(double* x, int n, double num);					// заполняет массив числом num
	void fill_mass(double* x, int n, double* c);				// заполняет массив другим массивом игнорирую 0
}