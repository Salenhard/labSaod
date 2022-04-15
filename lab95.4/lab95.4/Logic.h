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
	f.open(fileName);						// открытие файла
	if (!f.is_open()) {
		cerr << "Файл не открыт!";
		exit(1);
	}
	else
		cout << "Файл открыт!" << endl;

	while (f.get(p.sex)) {					// пока считывается пол персоны
		f.get(blankseparator);				// пустой символ
		f.getline(p.name, 20, '\n');		// имя персоны
		if (p.sex == 'F')					// если пол женский то заносим в женсую очередь иначе в мужскую
			females.insert(p);
		else
			males.insert(p);
	}
}

void getPairs() {										//собирание пар
	while (females.empty() == false && males.empty() == false)					// пока очереди ни 1 из очередей не пуста собирать пары;
	{
		p = females.del();
		cout << p.name << " ";
		p = males.del();
		cout << p.name << endl;
	}
	if (females.empty() == false)								//если пары собраны но женщины осталось то выводить сколько осталось и кто первый в очереди
	{
		cout << females.lenght() << " женщин(а) ожидают(ет)" << endl
			<< p.name << " получит партнера первым";
	}
	else if (males.empty() == false)                       //если пары собраны но мужчины осталось то выводить сколько осталось и кто первый в очереди
	{
		p = males.front();
		cout << males.lenght() << " мужчин(а) ожидают(ет)" << endl
			<< p.name << " получит партнера первым";
	}
	else
		cout << "Очереди пусты";
}
