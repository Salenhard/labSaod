#include <iostream>
#include "Header.h"
#include <ctime>

using namespace std;

int main()
{
	unsigned int start_time = clock(); // начальное время
	
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время
	vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> list2;
	int n, c;
	cout << logic::show(list);
	cout << endl;
	cout << "List binary search: " << logic::binary_search(list, 5) << endl;
	cout << "List cycle search: " << logic::cycle_search(list, 5) << endl;

	cout << "Vector size: ";
	cin >> n;
	logic::fillRand(list2, n);
	logic::selectionSort(list2);
	cout << logic::show(list2) << endl;
	cout << endl << "input number :";
	cin >> c;
	

	start_time = clock(); // начальное время
	cout << "List 2 cycle search: " << logic::cycle_search(list2, c) << endl;
	end_time = clock(); // конечное время
	search_time = end_time - start_time; // искомое время
	double time1 = search_time;
	cout << "Time: " << time1 << " ms" << endl;

	start_time = clock(); // начальное время
	cout << "List 2 binary search: " << logic::binary_search(list2, c) << endl;
	end_time = clock(); // конечное время
	search_time = end_time - start_time; // искомое время
	double time2 = search_time;
	cout << "Time: " << time2 << " ms" << endl;
	logic::fout(list2, time1, time2, c);
	

}
