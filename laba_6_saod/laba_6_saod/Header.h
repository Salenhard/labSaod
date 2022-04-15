#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#pragma once

namespace logic {
	template<class T>
	T binary_search(const std::vector<T>& list, const T& item)
	{
		T low = 0;
		T high = list.size() - 1;
		while (low <= high)
		{
			T mid = (low + high);
			T guess = list[mid];
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

	template<class T>
	void selectionSort(std::vector<T> &list)
	{
		int j = 0;
		int tmp = 0;
		for (int i = 0; i < list.size(); i++) {
			j = i;
			for (int k = i; k < list.size(); k++) {
				if (list[j] > list[k]) {
					j = k;
				}
			}
			tmp = list[i];
			list[i] = list[j];
			list[j] = tmp;
		}
	}
	template<class T>
	void fillRand(std::vector<T>& list, unsigned int n) {
		list.resize(n);
		for (unsigned int i = 0; i < n; i++)
			list[i] = rand() % 100000;
	}

	template<class T>
	std::string show(std::vector<T> list) {
		std::string str;
		for (int i = 0; i < list.size(); i++) {
			if (i % 15 == 0)
				str += "\n" + std::to_string(list[i]) + " ";
			else
			str += std::to_string(list[i]) + " ";
		}
		return str;
	}

	template<typename C>
	C cycle_search(const std::vector<C>& list, const C& item)
	{
		for (int i = 0; i < list.size(); i++)
			if (list[i] == item)
				return i + 1;
		return NULL;
	}
	template<typename T>
	void fout(std::vector<T> list, int time1, int time2, int number)
	{
		std::ofstream f;
		f.open("text.txt");
		f << "Array: " << show(list) << "\n";
		f << "Number to find: " << number << "\n";
		f << "Bynary search time: " << time1 << " ms" << "\n";
		f << "Cycle search time: " << time2 << " ms" << "\n";
	}
}