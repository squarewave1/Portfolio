// ConsoleApplication26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	int num1, num2;

	// Usuaria entrara ambas notas. Una luego de la otra
	cout << "Entra la nota de tu primer examen." << endl;
	cin >> num1;
	cout << "Entra la nota del ultimo examen tomado." << endl;
	cin >> num2;

	   // Si los numeros son iguales
	if (num1 == num2)
	{
		// Imprime mensaje exclamativo y de motivacion
		
		cout << "Que coincidnecia! "" Espero que tus resultados sean favorables.\n";
		cout << "De no serlo continua mejorando. Que tengas mucho exito!";

	}

	else //Si los numeros no son iguales
	{
		// Imprime mensaje de motivacion
		cout << "Espero que tus resultados sean favorables.\n";
		cout << "De no serlo continua mejorando. Te deseo muchisimo exito!";
	}
	
	
	return 0;

}

