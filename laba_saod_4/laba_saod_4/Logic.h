#pragma once
namespace mass {
	std::string show(double* matr, int n);							// ���������� ������ � ���� ������
	std::string show(int* matr, int n);
	int maxfind(double* x, int n);									// ������� ������������ ����� � �������
	int sum(double* x, int l);										// ������� ����� ����� ������� �� l - ��������
	void sort(double* x, int n);									// ���������� �������
	void fill(double* x, int n);									// ���������� ������� ��������
	void fill_rand(double* x, int n);								// ���������� ������� ���������� �������
	void text_out(double* x, int n, double a, double b);								// ����� � �����
	void delinrange(double* x, int n, double a, double b);				// ������� �������� ������� �������� � ��������
	int find_last_pos(double* x, int n);							// ������� ��������� ������������� �����
	void fill_num(double* x, int n, double num);					// ��������� ������ ������ num
	void fill_mass(double* x, int n, double* c);				// ��������� ������ ������ �������� ��������� 0
}