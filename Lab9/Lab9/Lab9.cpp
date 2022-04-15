#include <iostream>
#include "Queue.h"
#include "Logic.h"
using namespace std;
int main()
{
	Queue<int> digitQueue[10];
	const int n = 50;
	int L[n];
	cout << "Array: " << endl;
	fillRand(L, n);
	printArr(L, n);
	cout << "Array sorted by ones: " << endl;
	distribute(L, digitQueue, n, ones);
	collect(digitQueue, L);
	printArr(L, n);
	cout << "Array sorted by tens: " << endl;
	distribute(L, digitQueue, n, tens);
	collect(digitQueue, L);
	printArr(L, n);
	cout << "Array sorted by hundreds: " << endl;
	distribute(L, digitQueue, n, hundreds);
	collect(digitQueue, L);
	printArr(L, n);

}
