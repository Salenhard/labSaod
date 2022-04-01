#include <vector>
#include <string>
#include <iostream>

#pragma once

namespace logic {
	template<class T>
	T binary_search(const std::vector<T>& list,const T &item);
	template <class C>
	C cycle_search(const std::vector<C>& list, const C &item);
	void fillRand(std::vector<int>& list, unsigned int n);
	void show(std::vector<int> list);

}