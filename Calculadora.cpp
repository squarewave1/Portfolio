#include "Calculadora.h"
#include <iostream>

Calculadora::Calculadora()
{
}

Calculadora::~Calculadora()
{
}
void Calculadora::SumarDosEnteros()
{
	MyInt a, b, c;
	cout << endl << "____" << endl << endl;
	cout << endl << endl << "Suma" << endl << endl;
	cout << endl << "____" << endl << endl;
	cout << "Entre el primer numero entero: ";
	cin >> a;
	cout << endl << endl;
	cout << "Entre el segundo numero entero: ";
	cin >> b;
	c = a + b;

	cout << endl << "____" << endl << endl;
	cout << a << "+" << b << "=" << c << endl;
	cout << endl << "____" << endl << endl;
}
void Calculadora::SumarDosReales()
{
	MyDouble a, b, c;
	cout << endl << "____" << endl << endl;
	cout << endl << endl << "Suma" << endl << endl;
	cout << endl << "____" << endl << endl;
	cout << "Entre el primer numero real: ";
	cin >> a;
	cout << endl << endl;
	cout << "Entre el segundo numero real: ";
	cin >> b;
	c = a + b;

	cout << endl << "____" << endl << endl;
	cout << a << "+" << b << "=" << c << endl;
	cout << endl << "____" << endl << endl;

}

//void multiplicar ...
//
//void dividir...
void Calculadora::Ejecutar()
{
	int operacion;

	do
	{
		cout << "Menu de Figuras" << endl
			<< "\t1. Sumar Dos Enteros" << endl
			<< "\t2. Sumar Dos Reales" << endl
			<< "\t3. Salir" << endl
			<< "Cual es su seleccion: ";
		cin >> operacion;
		switch (operacion)
		{
		case 1: Calculadora::SumarDosEnteros();
			break;
		case 2: Calculadora::SumarDosReales();
			break;
		case 3: cout << "ADIOS" << endl;
			break;
		default: cout << "ERROR: Seleccion equivocada. " << endl;
		}
	} while (operacion != 3);
}

}
