// ParametrosFunciones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void FunctionP(int* x, int* y) {
	cout << "FunctionP " << endl;
	cout << "X Address :" << x << endl;
	cout << "Y Address :" << y << endl;

	int temp = *x;
	*x = *y;
	*y = temp;
	return;
}

void FunctionV(int x, int y) {
	cout << "FunctionV " << endl;
	cout << "X Address :" << &x << endl;
	cout << "Y Address :" << &y << endl;

	int temp = x;
	x = y;
	y = temp;
	return;
}

void FunctionR(int &x, int &y) {
	cout << "FunctionR " << endl;
	cout << "X Address :" << &x << endl;
	cout << "Y Address :" << &y << endl;

	int temp = x;
	x = y;
	y = temp;
	return;
}


int main()
{
    std::cout << "Pointers, ref and values!\n";

	int a = 150;
	int b = 200;

	cout << "A Address :" << &a << endl;
	cout << "A Value = " << a << endl;
	cout << "B Address :" << &b << endl;
	cout << "B Value = " << b << endl;
	
	//lets Call it with values 

	FunctionV(a, b);
	cout << "A Value = " << a << endl;
	cout << "B Value = " << b << endl;
	//lets call it with pointers

	FunctionP(&a, &b);
	cout << "A Value = " << a << endl;
	cout << "B Value = " << b << endl;
	//lets call it by reference or "alias"

	int& rA = a;
	int& rB = b;

	FunctionR(rA, rB);
	cout << "A Value = " << a << endl;
	cout << "B Value = " << b << endl;
}