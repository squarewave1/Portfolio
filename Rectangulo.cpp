	#include "Rectangulo.h"



	Rectangulo::Rectangulo()  //Default constructor 
	{
		this->ancho = 1.0; // "this" es un pointer (tiene una direccion en algun lugar de la memoria y senala de forma directa) suguiere los nombres que ya se usaron tiene esta lista de cosas 

		this->largo = 1.0; // El de arriba y el de abajo se le considera un mensaje

	}

	Rectangulo::Rectangulo(const Rectangulo & unRectangulo) //const evita que se cambie y se quede igual unRectangulo es la instancia de Rectangulo // Copy constructor
	{
		this->ancho = unRectangulo.ancho; // Son mensajes escritos pero de forma distinta en el primero la flecha y en el otro se usa el punto    
		this->largo = unRectangulo.largo; // 

	}
	Rectangulo::~Rectangulo()
	{
	}
	
	double Rectangulo::area() const
	{
		return (this->ancho * this->largo);
	}
	double Rectangulo::perimetro() const
	{
		return (this->ancho * 2.0 + this->largo *2.0);
	}

	double Rectangulo::obtenerAncho() const
	{
		return (this->ancho);
	}

	double Rectangulo::obtenerLargo() const
	{
		return (this->largo);
	}

	void Rectangulo::cambiarAncho(double ancho) 
	{
		this->ancho = ancho;
	}


	void Rectangulo::cambiarLargo(double largoo)
	{
		this->largo = largo; // aqui se ditingue el ancho que es atributo y el que es un parametro. 

	}
