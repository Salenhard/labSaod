#pragma once
namespace logic {
	void fill_mass(int* x, int n);			// ���������� �������� ������ � �������
	int sort(int* x, int n);				// ����������� ����������
	int sortfte(int* x, int n);				// ���������� �� �������� �������� � ����� �������
	int sortetf(int* x, int n);				// ���������� �� ����� ������� � �������� ��������
	void text_out(int* x, int n, int c);	// ����� � ��������� ����
	void fill_mass(int* x, int n, int* c);	// ���������� ������� ������ ��������
	void swap(int& a, int& b);				// ������ ������� ����. ����������
}