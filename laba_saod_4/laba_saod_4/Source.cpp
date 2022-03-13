#include "Header.h"
#include <iostream>
#include <string>
#include "Logic.h"
#include <fstream>

void logic::fill_mass(int* x, int n) {								// ���������� ������� 
	if (n > 0)														// ���� n > 0
		for (int i = 0; i < n; i++){								// ���� �� 0 �� n ������� �������
			std::cout << "Input x[" << i + 1 << "]: ";				// ������� ����� ��������� �������
			std::cin >> x[i];										// ���� �������� �������
			while (x[i] > 3 or x[i] < 0) {							// �������� ��������� ����� 3 < x < 0 ���� ���������� ������� �� ������ ������ ����� ������
				std::cout << "Input x[" << i + 1 << "]: ";			// ������� ����� ��������� �������
				std::cin >> x[i];									// ���� �������� �������
			}
		}
	else
		throw std::invalid_argument("Size of array must be more then 0!");
}

void logic::swap(int& a, int& b) {						//������ ������� ����. ���������� 
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int logic::sort(int* x, int n) {				// ���������� �� ����� ������� � �������� ��������
	int count = 0;								// ���-�� �����������
	for (int i = 0; i < n; i++) {				// ���� �� 0 �� ����� �������
		for (int k = n - 1; k > i; k--) {			// ���� �� ����� �� �������� ��������
			if (x[i] > x[k]) {						// ���� i ������� ������ k �� ������ �� ������� i ��� ������ ������� k ��������
				swap(x[k], x[i]);					// ������ �������� �������
				count++;							// ���������� ���-�� �����
			}
		}
	}
	return count;									// ����� ���-�� �����
}	

void logic::text_out(int* x, int n,int c) {                                           // ����� � �����
	std::ofstream f;
	f.open("Myfile.txt");
	f << "Array: " << mass::show(x, n) << std::endl;
	f << "Count of moves: " << c << std::endl;
	f.close();
}

void logic::fill_mass(int* x, int n, int* c)             // ���������� ������� ������ ��������
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] != 0) {
			c[k] = x[i];
			k++;
		}
	}
}