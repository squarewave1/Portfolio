//El programa preguntara al usuario cuantas veces quiere ver la palabra hola impresa 
//y luego la imprimirá el número de veces que el usuario indique. 
// Felix Rivera Rodriguez
//# 52743


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int cantidadVeces; // Variable solicitada

	cout << "Por favor, ingrese la cantidad de veces que desea\n";  
	cout << "imprimir la palabra Hola:\n";
	cin >> cantidadVeces;


	while (cantidadVeces) //Se podria ejecutra variable ingresada por usuario de forma infinita
	{
		cout << "\tHello\n  "; // Se imprime de forma infinita variable (cantidadVeces) ingresada por usuario 
		cantidadVeces--; //El posfijo -- detiene la variable infinita del "while" para detener la impresion
		                //en el numero de veces que el usuario la solicito 
	}

	 
return 0;

}



