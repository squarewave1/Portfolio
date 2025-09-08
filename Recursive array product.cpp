// ConsoleApplication83.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


double product(double a[], int n)
{
	if (n == 1)
		return a[0];
	
	return product(a, n - 1) * a[n - 1];
}

int main()
{
	double a[] = { 8, 1, 3, 4, 5, 2, 9 };
	cout << "The number is: " << product(a, 2);

	return 0;
}
