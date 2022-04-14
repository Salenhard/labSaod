#pragma once
#include <iostream>
#include "Queue.h"
enum DigitKind{ones, tens, hundreds};
using namespace std;

void distribute(int L[], Queue<int> digitQueue[], int n, DigitKind kind)
{
	for (int i = 0; i < n; i++)
	{
		if (kind == ones) 
			digitQueue[L[i] % 10].insert(L[i]);
		if (kind == tens)
			digitQueue[(L[i] % 100) / 10].insert(L[i]);
		if (kind == hundreds)
			digitQueue[L[i] / 100].insert(L[i]);
	}
}

void collect(Queue<int> digitQueue[], int L[]) {
	int i = 0;
	for (int digit = 0; digit < 10; digit++)
	{
		while (digitQueue[digit].empty() == false) {
			L[i++] = digitQueue[digit].del();
		}
	}
}

void printArr(int L[], int n) {
	int i = 0;
	while (i < n) {
		cout.width(5);
		cout << L[i];
		if (++i % 10 == 0)
			cout << endl;
	}
	cout << endl;
}

void fillRand(int L[], int n) {
	for (int i = 0; i < n; i++) {
		L[i] = rand() % 1000;
	}
}