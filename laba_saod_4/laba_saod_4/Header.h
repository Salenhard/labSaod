#pragma once
namespace logic {
	void fill_mass(int* x, int n);			// заполнение массивом вводом в консоль
	int sort(int* x, int n);				// оптимальная сортировка
	int sortfte(int* x, int n);				// сортировка от текущего элемента к концу массива
	int sortetf(int* x, int n);				// сортировка от конца массива к текущему элементу
	void text_out(int* x, int n, int c);	// вывод в текстовый файл
	void fill_mass(int* x, int n, int* c);	// заполнение массива другим массивом
	void swap(int& a, int& b);				// меняет местами знач. переменных
}