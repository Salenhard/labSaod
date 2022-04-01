#include <iostream>
#include "Header.h"
#include <ctime>

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

template<typename C>
C cycle_search(const std::vector<C>& list, const C& item)
{
	for (int i = 0; i < list.size(); i++)
		if (list[i] == item)
			return i + 1;
	return NULL;
}


using namespace std;

int main()
{
	vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> list2;
	int n, c;
	logic::show(list);
	cout << endl;
	cout << "List binary search: " << binary_search(list, 5) << endl;
	cout << "List cycle search: " << cycle_search(list, 5) << endl;

	cout << "Vector size: ";
	cin >> n;
	logic::fillRand(list2, n);
	logic::show(list2);
	cout << endl << "input number :";
	cin >> c;
	

	double start_time = clock(); // начальное время
	cout << "List 2 binary search: " << binary_search(list2, c) << endl;
	double end_time = clock(); // конечное время
	double search_time = end_time - start_time; // искомое время
	cout << "Time: " << search_time / 1000.0 << endl;

    start_time = clock(); // начальное время
	cout << "List 2 cycle search: " << cycle_search(list2, c) << endl;
    end_time = clock(); // конечное время
	search_time = end_time - start_time; // искомое время
	cout << "Time: " << search_time / 1000.0 << endl;
	

}
