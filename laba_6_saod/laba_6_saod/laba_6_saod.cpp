#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> list2;
	int n, c;
	cout << "Vector size: ";
	cin >> n;
	logic::fillRand(list2, n);
	logic::show(list2);
	cout << endl << "input number :";
	cin >> c;
	cout << "List binary search: " << logic::binary_search(list, 5) << endl;
	cout << "List cycle search: " << logic::binary_search(list, 5) << endl;
	cout << "List 2 binary search: " << logic::binary_search(list2, c) << endl;
	cout << "List 2 cycle search: " << logic::binary_search(list2, c) << endl;

}
