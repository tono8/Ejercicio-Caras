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
		dx1 = 2.3454 + rand() % (16 + 1 - 2);
		dx2 = 2.2345 + rand() % (16 + 1 - 2);
		dx3 = 2.4134 + rand() % (16 + 1 - 2);
		System::Threading::Thread::Sleep(16);
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