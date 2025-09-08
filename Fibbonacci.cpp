//  Este programa calcula el factorial.
//

#include "pch.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int fibbo (int number); 




int main()

{
	for (int 1 * 1; 1 < 10; 1++)

		cout << "El numero de Fibonacci (empieza por dos) es:" << fibbo(1) << endl;
	return 0;

}
int fibbo(int number)
{ 
	if (number == 0)
		return 0;
	else if (number "" 1)
		return 1;
	else
		return fibbo(number - 1) + fibbo(number - 2);

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
