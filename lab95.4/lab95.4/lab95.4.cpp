#include <iostream>
#include <string>
#include <fstream>
#include "Logic.h"

const string fileName = "dance.dat";

int main()
{
	setlocale(0, "ru");
	readfile(fileName);
	getPairs();
}
