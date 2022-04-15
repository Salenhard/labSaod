#pragma once
#include "Queue.h"
using namespace std;

struct Person {
	char name[20];
	char sex;
};

Queue<Person> females;
Queue<Person> males;

Person p;

char blankseparator;

void readfile(std::string fileName) {

	std::ifstream f;
	f.open(fileName);						// �������� �����
	if (!f.is_open()) {
		cerr << "���� �� ������!";
		exit(1);
	}
	else
		cout << "���� ������!" << endl;

	while (f.get(p.sex)) {					// ���� ����������� ��� �������
		f.get(blankseparator);				// ������ ������
		f.getline(p.name, 20, '\n');		// ��� �������
		if (p.sex == 'F')					// ���� ��� ������� �� ������� � ������ ������� ����� � �������
			females.insert(p);
		else
			males.insert(p);
	}
}

void getPairs() {										//��������� ���
	while (females.empty() == false && males.empty() == false)					// ���� ������� �� 1 �� �������� �� ����� �������� ����;
	{
		p = females.del();
		cout << p.name << " ";
		p = males.del();
		cout << p.name << endl;
	}
	if (females.empty() == false)								//���� ���� ������� �� ������� �������� �� �������� ������� �������� � ��� ������ � �������
	{
		cout << females.lenght() << " ������(�) �������(��)" << endl
			<< p.name << " ������� �������� ������";
	}
	else if (males.empty() == false)                       //���� ���� ������� �� ������� �������� �� �������� ������� �������� � ��� ������ � �������
	{
		p = males.front();
		cout << males.lenght() << " ������(�) �������(��)" << endl
			<< p.name << " ������� �������� ������";
	}
	else
		cout << "������� �����";
}
