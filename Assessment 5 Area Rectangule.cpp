// Este programa calcula el area de un rectanculo 
// Felix Rivera Rodriguez
// Assessment 5.1

#include "pch.h"
#include <iostream> 
        

using namespace std;
int main()
{
	//Este programa calcula el area de un rectanculo

	double base, altura, area ; //Variables double o float para incluir decimal si fuese necesario
	cout << "Este programa calcula el area de un rectangulo.\n";
	cout << "Entre la base de un rectangulo:\n";       
	cin >> base;                              // El usuario entra la base en forma numerica
	cout << "Entre la altrura del rectangulo:\n";
	cin >> altura;							 // El usuario entra el area en forma numerica
	// Computo del area 
	area = base * altura;
	cout << "El area del rectangulo es " << area << endl;

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
