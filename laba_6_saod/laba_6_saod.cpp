#include <iostream>
#include "Header.h"
#include <chrono>




using namespace std;

int main()
{
	chrono::steady_clock::time_point start_time;
	chrono::steady_clock::time_point end_time;
	chrono::duration<float> duration;
	vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> list2;
	int n, c;
	logic::show(list);
	cout << endl;
	cout << "List binary search: " << logic::binary_search(list, 5) << endl;
	cout << "List cycle search: " << logic::cycle_search(list, 5) << endl;

	cout << "Vector size: ";
	cin >> n;
	logic::fillRand(list2, n);
	cout << "Array: " << logic::show(list2) << endl;
	cout << endl << "input number :";
	cin >> c;

	start_time = chrono::high_resolution_clock::now(); // начальное время
	//cout << "List 2 binary search: " << logic::binary_search(list2, c) << endl;
	end_time = chrono::high_resolution_clock::now(); // конечное время
	duration = end_time - start_time; // искомое время


	start_time = chrono::high_resolution_clock::now(); // начальное время
	cout << "List 2 cycle search: " << logic::cycle_search(list2, c) << endl;
	end_time = chrono::high_resolution_clock::now(); // конечное время
	duration = end_time - start_time; // искомое время
	string t1 = "Time: " + to_string(duration.count() * 1000) + "\n";
	cout << t1;

	start_time = chrono::high_resolution_clock::now(); // начальное время
	cout << "List 2 binary search: " << logic::binary_search(list2, c) << endl;
	end_time = chrono::high_resolution_clock::now(); // конечное время
	duration = end_time - start_time; // искомое время
	string t2 = "Time: " + to_string(duration.count() * 1000) + "\n";
	cout << t2;
	logic::fOut("text.txt", list2, c,t1 ,t2);

}
