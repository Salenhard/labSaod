#include "Header.h"

int logic::binary_search(std::vector<int>& list, int item)
{
	int low = 0;
	int high = list.size() - 1;
	while (low <= high)
	{
		int mid = (low + high);
		int guess = list[mid];
		if (guess == item)
		{
			return mid + 1;
		}
		else if (guess > item)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return NULL;
}

int logic::cycle_search(std::vector<int>& list, int item)
{
	for (int i = 0; i < list.size() - 1; i++)
	if (list[i] == item)
		return i + 1;
	return NULL;
}

void logic::fillRand(std::vector<int>& list, int n) {
	list.resize(n);
	list[0] = rand() % 10;
	for (int i = 1; i < n; i++)
	{
		list[i] = rand() % 100;
		while (list[i] <= list[i - 1])
			list[i] = rand() % 100 * 10 * i;
	}
}

void logic::show(std::vector<int> list) {
	for (int i = 0; i < list.size() - 1; i++)
		std::cout << "[" << i + 1 << "]: " << list[i] << " ";
}