#pragma once
#include"Stack.h"
class Calc
{
	Stack<double> S;
	void enter(double num);
	bool getTwoOperands(double& opnd1, double& opnd2);
	void compute(char op);
public:
	Calc();
	void run();
	void clear();
};

