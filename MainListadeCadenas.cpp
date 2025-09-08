#include <iostream>

using namespace std;

int main()
{
	ListaDeCadenas lista;
	MyString a, b, c;

	cout << lista << endl << endl;
	cout << endl << "-------------------" << endl << endl;

	cout << "Entre su primer nombre: ";
	cin >> a;

	cout << "Entre su primer apellido: ";
	cin >> b;

	c = a + b;
	cout << "Se agrega: " << c << " Procedimiento y objetos"; 
	lista + c + "Procedimiento" + "objetos";
	cout << endl << endl << lista << endl << endl;
	cout << endl << "----------------" << endl << endl;
	cout << "Se remueve: Procedimiento" << endl << endl;
	lista - "Procedimiento";
	cout << lista << endl << endl;
	cout << endl << "-----------------------" << endl << endl;
	cout << "Cantidad de cadenas: " << lista.cantidadDeCadenas() << endl << endl; 
	return (0);


}

