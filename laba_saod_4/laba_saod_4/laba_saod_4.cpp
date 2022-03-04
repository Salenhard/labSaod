#include <iostream>
#include "Header.h"
#include "Logic.h"
int main()
{
    int n;
	std::cout << "Input size of array n = ";
    std::cin >> n;
    int* x = new int[n];
	try
	{
		logic::fill_mass(x, n);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	int c = logic::sort(x, n);
	std::cout << "Array: " << mass::show(x, n) << std::endl;
	std::cout << "Count of moves: " << c << std::endl;
	std::cout << "Sorted array: " << mass::show(x, n) << std::endl;
	logic::text_out(x, n, c);

    delete[]x;
}

