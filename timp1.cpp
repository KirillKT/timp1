#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void Plus(double a, double b)
{
	cout << a + b << endl;
}

void Minus(double a, double b)
{
	cout << a - b << endl;
}

void Multiply(double a, double b)
{
	cout << a * b << endl;
}

void Divide(double a, double b)
{
	if (b == 0.0)
		cout << "ERROR! The divisor can not be equal to zero." << endl;
	else
		cout << a / b << endl;
}

void ErrorCheck(char Err)
{
	if (Err != '\0')
	{
		cout << "ERROR! The text was entered, not the number." << endl;
		exit(0);
	}
}


int main(int argc, char *argv[])
{
	char *Err;
	char oper;
	double a, b;
	oper = *argv[2];
	a = strtod(argv[1], &Err);
	ErrorCheck(*Err);
	b = strtod(argv[3], &Err);
	ErrorCheck(*Err);
	cout << a << " " << oper << " " << b << " = ";
	if (oper == '+')
		Plus(a, b);
	else if (oper == '-')
		Minus(a, b);
	else if (oper == '*')
		Multiply(a, b);
	else if (oper == '/')
		Divide(a, b);
	else
		cout << "ERROR! Unknown operator." << endl;
	return 0;
}


