// This program asks for the lengths of the two sides of a   // right triangle. The length of the hypotenuse is then 
 // calculated and displayed. 
#include <iostream>
#include <iomanip>    // For setprecision 
#include <cmath>      // For the sqrt and pow functions

#include "pch.h"


using namespace std;

int main()
{
	// Este programa lee la suerte del usuario al momento de uso.
	int num1, num2;
	num1 = 8;
	num2 = 5;


	// Usuario entrara ambos numeros. Una luego de la otra
	cout << "Entra el primer numero para determinar tu suerte hoy.\n" << endl;
	cin >> num1;


	// Si los numeros son iguales
	if (8 == num1)

	{
		// Imprime mensaje exclamativo y de motivacion

		cout << "Que coincidnecia! "" Acertaste .\n";
		cout << "Hoy es tu dia de suerte. Que tengas lindo dia!\n";
	}

	else

	{
		//Si los numeros no son iguales

		// Imprime mensaje de motivacion
		cout << "No es tu dia de suerte.\n";
		cout << "Que tengas lindo dia!\n ";
	}

	cout << "Entra el segundo numero para continuar leyendo tu suerte para el dia de hoy.\n" << endl;
	cin >> num2;

	if (5 == num2)                  //Si los numeros son iguales
		// Imprime mensaje exclamativo y de motivacion
	{
		cout << "Que coincidnecia! "" Acertaste.\n";
		cout << "Hoy es tu dia de suerte. Que tengas lindo dia!";
	}
	else
	{
		//Si los numeros son iguales
// Imprime mensaje de motivacion
		cout << "No es tu dia de suerte.\n";
		cout << "Que tengas lindo dia!";
	}

	return 0;

}


using namespace std;


int main()
{
	double a, b, c;
	cout << "Enter the length of side a: ";
	cin >> a;
	cout << "Enter the length of side b: ";
	cin >> b;
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));
	cout << "The length of the hypotenuse is " << endl;
	cout << setprecision(2) << c << endl;
	return 0;
}