#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <locale>
using namespace std;
namespace sort {
	void fillMassRand(double* a, int n);							// ��������� ������� ���������� �������
	void fillMassIn(double* a, int n);							// ���������� �������
	void printMass(double* a, int n);						// ����� ������� �� �����
	void fPrintMas(double* a, int n, ofstream& f);			// ����� ������� � ����
	void copyMass(double* a, double* b, int n);				// ��������� ������ 1 � ������ 2
	void swap(int i, int j, double* a);						// �������� i-�� � j-�� � ������� a
	void bubble(double* a, int n);						// ���������� ���������
	void choice(double* a, int n);						// ���������� �������
	void inserts(double* a, int n);					// ���������� ���������
	void fast(double* a, int first, int last);			// ���������� �������  ex: f=0;l=n-1
	void shell(double* a, int n);						// ���������� �����
}

