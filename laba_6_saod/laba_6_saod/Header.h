#include <vector>
#include <string>
#include <iostream>
#pragma once

namespace logic {
	int binary_search(std::vector<int>& list, int item);
	int cycle_search(std::vector<int>& list, int item);
	void fillRand(std::vector<int>& list, int n);
	void show(std::vector<int> list);
}