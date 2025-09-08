//Programa de tutoria de matematicas 
//Felix Rivera Rodriguez
//math.cpp
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
	cout << "\t\tTutor de Matematicas " << endl;
	cout << "Suma los siguientes numeros que saldran al azar para\n"
		"que practiques tus destrezas matematicas:\n";
	// Constants 
	const int MIN_VALUE = 1;  // Minimum die value 
	const int MAX_VALUE = 100;  // Maximum die value 

	  // Variables 
	int num1;  // To hold the value of die #1 
	int num2;  // To hold the value of die #2 
	int result;

	   // Get the system time. 
	unsigned seed = time(0);

	// Seed the random number generator. 
	srand(seed);

	
	num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	cout << "\n";
	cout << num1 << " + " << num2 << " = " << endl;
	
		cout << "Entre su respuesta" << endl;
		//Read a key from the user to display the result
		
	if (result == num1 + num2)
		
			cout << "Esa es la respuesta correcta.\n";
	
	//add the two random numbers and store in result
	else if (result != num1 + num2)
		cout << "Esa no es la respuesta correcta.\n";
		cout << "La respuesta correcta es:\n";
		cout << "" << endl;
		cout << num1 << " + " << num2 << " = " << result << endl;
	
		cin >> result;
	system("pause");
	return 0;

}
