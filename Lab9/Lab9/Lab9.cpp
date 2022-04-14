#include <iostream>
#include "Queue.h"
#include "Logic.h"
using namespace std;
int main()
{
	Queue<int> digitQueue[10];
	const int n = 75;
	int L[n];

	fillRand(L, n);
	printArr(L, n);

	distribute(L, digitQueue, n, ones);
	collect(digitQueue, L);
	printArr(L, n);

	distribute(L, digitQueue, n, tens);
	collect(digitQueue, L);
	printArr(L, n);

	distribute(L, digitQueue, n, hundreds);
	collect(digitQueue, L);
	printArr(L, n);

}
