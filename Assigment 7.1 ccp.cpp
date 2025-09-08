// This program illustrate the use of the switch statement.
//FELIX RIVERA RODRIGUEZ

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char grade;

	cout << "Whta grade did you earn in Programming I?"<< endl;

	cin >> grade;

	switch (grade) //Switch statement starts

	{
	case 'a':
	case 'A': cout << "an A-excellent work!" << endl;
		cout << "You pass with excellent honors!" << endl;
		break;
	case 'b':
	case 'B': cout << "you got a B-good job!" << endl;
		cout << "You pass with honors!" << endl;
		break;
	case 'c':
	case 'C': cout << "earning a C is satisfactory" << endl;
		cout << "You pass satisfactorily." << endl;
		break;
	case 'd':
	case 'D': cout << "while D is passing, there is a problem" << endl;
		cout << "You pass with a very low grade." << endl;
		break;
	case 'f':
	case 'F': cout << "you failed-better luck next time" << endl;
		break;
	default: cout << "You did not enter an A, B, C, D, or F";

	}
	
		return 0;

	}

	


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
