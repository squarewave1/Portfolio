
//FELIX RIVERA RODRIGUEZ 52743

// This program calculates compounded interest earned

#include <iostream>
#include <iomanip>    // For setprecision 
#include <cmath>      // For the sqrt and pow functions


using namespace std;


int main()
{

	double principal, interestRate, interest, timeCompounded, amountSavings;

	cout << "Enter principal: ";
	cin >> principal;


	cout << "Entre interest rate: ";
	cin >> interestRate;
	interestRate = interestRate/100.00;


	cout << "Number of times compounded:";
	cin >> timeCompounded;
	timeCompounded = timeCompounded / 3.0;

	amountSavings = principal * pow((1 + interestRate / timeCompounded), timeCompounded);
	interest = amountSavings - principal;

	cout << "Interest rate:                "        << interestRate << "%" << endl;

	cout << "Times compounded:             "       << timeCompounded << endl;

	cout << "Principal:                    "           << "$"<< principal << endl;

	cout << "Interest:                     "             << "$"<< amountSavings - principal << endl;

	cout << "Amaount Savings:              "    << "$" << amountSavings << endl;

	cout << setprecision(2) << showpoint << fixed;

	system("pause");

	return 0;
}