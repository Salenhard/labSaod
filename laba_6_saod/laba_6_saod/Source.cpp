#include "Header.h"


void logic::fillRand(std::vector<int>& list, unsigned int n) {
	list.resize(n);
	for(unsigned int i = 0; i < n; i++)
	list[i] = (rand() % (10 + i * 10)) + i * i * 20;
}

void logic::show(std::vector<int> list) {
	for (int i = 0; i < list.size(); i++)
		std::cout << "[" << i + 1 << "]: " << list[i] << " ";
}