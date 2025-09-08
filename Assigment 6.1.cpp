// Este programa es para que el usuario entre dos valores para probar si son iguales. 
// Se ofrece un mensaje para valores iguales y otro para valores diferentes. 

                                      //FELIX RIVERA RODRIGUEZ 

#include "pch.h"
#include <iostream>

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
