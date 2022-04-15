#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <chrono>
#pragma once

namespace logic {
	template<class T>
	T binary_search(const std::vector<T>& list, const T& item) {					// binary search
		T low = 0;																	// low - 1 elem in list
		T high = list.size() - 1;														// high - last elem in list
		while (low <= high)															// cycle while
		{
			T mid = (low + high) / 2;												// mid - center in diaposon between low and mid
			if (list[mid] == item)														// if guess = item then return number of element
			{
				return mid + 1;
			}
			else if (list[mid] > item)													// if guess > item then high = mid -1 changing diaposon 
			{
				high = mid - 1;
			}
			else																	// else changing low = mid 
			{
				low = mid + 1;
			}
		}
		return NULL;																// if item not found then return null
	}

	template<typename C>
	C cycle_search(const std::vector<C>& list, const C& item) {						// cycle search
		for (int i = 0; i < list.size(); i++)
			if (list[i] == item)													// if list[i] = item return number of it
				return i + 1;
		return NULL;																// if item not foun in list return null
	}

	template < typename X >
	void fillRand(std::vector<X>& list, unsigned int n) {							// fill list by random numbers in ascending order
		list.resize(n);
		for (unsigned int i = 0; i < n; i++)
			list[i] = (rand() % (10 + i * 10)) + i * i * 20;
	}

	template <typename Y>
	std::string show(std::vector<Y> list) {												// output list in console
		std::string str;
		for (int i = 0; i < list.size(); i++)
		{
			str += "[" + std::to_string(i + 1) + "]: " + std::to_string(list[i]) + " ";
			if (i % 100 == 0)
				str += "\n";
		}
		return str;
	}			

	template <typename F>
	void fOut(const std::string& filename, const std::vector<F>& list, const F& item, const std::string &t1, const std::string &t2) {
		std::ofstream f;
		f.open(filename);
		f << "Array: \n";
		f << show(list) << std::endl;
		f << "item to find: " << item << std::endl;
		f << "Cycle search: " << cycle_search(list, item) << std::endl;
		f << t1;
		f << "Bynary search: " << binary_search(list, item) << std::endl;
		f << t2;
		f.close();
	}
}