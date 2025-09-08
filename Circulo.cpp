#include "Circulo.h"
#include <iostream>
using namespace std;



Circulo::Circulo()
{
	this->radio = 1.0;
}


Circulo::Circulo(double radio)

{
	this->radio = radio;

}

Circulo::Circulo(const Circulo & unCirculo)
{
	this->radio = unCirculo.radio;
};

Circulo::~Circulo() {}

void Circulo::cambiarRadio(double radio)
{
	this->radio = radio;
}

double Circulo::obtenerRadio() const
{
	return(this->radio);
}
double Circulo::area()const
{
	return (3.14 *this->radio * this->radio);
}

double Circulo::circunferencia()const
{
	return (2.0 * 3.14 *this->radio);
}

void Circulo::mostrarRadio()const
{
	cout << "Radio: " << this->radio << endl;
}
void Circulo::mostrarArea()const
{
	cout << "Area: " << this->area() << endl;
}

void Circulo::mostrarCircunferencia()const
{
	cout << "Circunferencia: " << this->circunferencia() << endl;
}
void Circulo::mostrarInfo() const
{
	this->mostrarRadio();
	this->mostrarArea();
	this mostrarCircunferencia();
}

void Circulo::pedirRadio()
{
	cout << "Enter radio:  ";
	cin >> this->radio;
	while (this->radio <= 0.0)
	{
		cout << "ERROR: El valor tiene que ser "
			<< "mayor que 0." << endl;
		cout << "Enter radio: ";
		cin >> this->radio;
	}
}

