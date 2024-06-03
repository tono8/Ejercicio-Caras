#pragma once
#include <stdlib.h>
#include<time.h>
using namespace System::Drawing;
class CaraBase //Se establece el tamaño y posicion de los ojos debido a que se repite
{
protected:
	int x, y;
	int ancho, alto;
	float dx1,dx2,dx3;
	int color;
public:
	CaraBase() {
		x = 1;
		alto = ancho = 160;//dependiendo del diseño elegido se cambia este parametro
		srand(time(NULL));
		dx1 = 3.3454 + rand() % (16 + 1 - 3);
		dx2 = 5.2345 + rand() % (16 + 1 - 4);
		dx3 = 6.4134 + rand() % (16 + 1 - 5);

		if (dx1 == dx2) { dx1 = dx1 - 1; dx2 = dx2 + 1; }
		if (dx2 == dx3) { dx2 = dx2 - 1; dx3 = dx3 + 1; }
		if (dx3 == dx1) { dx3 = dx3 - 1; dx1 = dx1 + 1; }

		System::Threading::Thread::Sleep(16);
		//La carrera no va a terminar si dos o tres tienen la misma velocidad ## - Esto no esta en la rubrica de la tarea - ##
	};
	~CaraBase() {};
	Rectangle getArea() {//Ignora la ambiguedad aqui
		return Rectangle(x, y, ancho, alto);
	}
	void mostrarSeleccionCentro() {
		//ALTO=ANCHO=160
		x = 270;
		//ALTO=ANCHO=80
		//x = 320;
		y = 120;
	}
	void mover1() {
		x += dx1;
	}
	void mover2() {
		x += dx2;
	}
	void mover3() {
		x += dx3;
	}

};