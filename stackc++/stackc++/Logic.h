#pragma once
#include<string>
#include<iostream>
#include"Stack.h"

bool polindrom(const std::string& word) {
	Stack<char> rword;
	for (int i = 0; i < word.size(); i++)			// ���������� ����� � ����
		rword.push(word[i]);
	std::string word2;				
	word2.resize(word.size());						
	for (int i = 0; i < word.size(); i++) {			// ������� ����� �� ����� � �������� ����� ���� ������� � ������� while(stack.stackEmpty() != true)
		word2[i] = rword.pop();
	}
	if (word == word2)								// ���� ��� ����� �� ��������� true ���� ��� false
		return true;
	else
		return false;
}


void convert(int number, int base) {
	Stack<int> a;
	while (number >= base)				// ���� ����� ������ ��������� ����� �� ��������� ������� ���������� � ����
	{
		a.push(number % base);
		number /= base;
	}
	a.push(number);						// ������ ������ � ����
	while (a.stackEmpty() != true) {			// ���� ���� �� ������ ������� � ������� ������� � ������� �����
		std::cout << a.pop();
	}
	std::cout << std::endl;			
}