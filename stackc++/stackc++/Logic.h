#pragma once
#include<string>
#include<iostream>
#include"Stack.h"

bool polindrom(const std::string& word) {
	Stack<char> rword;
	for (int i = 0; i < word.size(); i++)			// записываем слово в стэк
		rword.push(word[i]);
	std::string word2;				
	word2.resize(word.size());						
	for (int i = 0; i < word.size(); i++) {			// выводим слово из стэка с верхнего можно было сделать с помощью while(stack.stackEmpty() != true)
		word2[i] = rword.pop();
	}
	if (word == word2)								// если они равны то возращаем true если нет false
		return true;
	else
		return false;
}


void convert(int number, int base) {
	Stack<int> a;
	while (number >= base)				// пока число больше основания делим на основание остаток записываем в стэк
	{
		a.push(number % base);
		number /= base;
	}
	a.push(number);						// запись отстка в стэк
	while (a.stackEmpty() != true) {			// пока стэк не пустой выводим и удаляем элемент с вершины стэка
		std::cout << a.pop();
	}
	std::cout << std::endl;			
}