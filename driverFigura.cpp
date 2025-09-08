#include <iostream> 
#include "Rectangulo.h"// Le anado la clase 
#include "Circulo.h"

using namespace std;

int main()
{

	Circulo c(2.0), *p;
	cout << "Circulo" << endl;
	c.mostrarInfo();
	cout << endl << endl;
	cout << "Ciruclo" << endl;
	c.pedirRadio();

	cout << endl << endl;
	cout << "Circulo" << endl;
	c.mostrarInfo();
	cout << endl << endl;
	cout << "Area del Ciruclo: " << c.area() << endl << endl;

	cout << "Radio del Circulo: " << c.obtenerRadio() << endl << endl;
	p = &c;
	cout << endl << endl;
	cout << "Area del Circulo:" << p->area() << endl << endl;
	return (0);
}

//int main()
//{
//	Rectangulo primeraInstancia, segundaInstancia(primeraInstancia);
//
//
//primeraInstancia.cambiarAncho(2.0); //Le digo a primeraInstancia cambiar ancho y largo
//	primeraInstancia.cambiarLargo(2.0);
//
//
//	segundaInstancia.cambiarAncho(4.5);
//	segundaInstancia.cambiarLargo(4.5);
//
//	cout << "Soy el proyecto figura!" << endl <<  endl;
//
//	system("pause");
//
//
//	return 0;
//}