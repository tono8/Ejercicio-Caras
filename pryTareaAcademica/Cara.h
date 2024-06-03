#pragma once
using namespace System::Drawing;
class CaraBase //Se establece el tamaño y posicion de los ojos debido a que se repite
{
protected:
	int x, y;
	int ancho, alto;
	int dx;
	int color;
public:
	CaraBase() {
		x = 20;
		alto = ancho = 160;//dependiendo del diseño elegido se cambia este parametro
		System::Random v;
		dx = v.Next(2, 16);
		//La carrera no va a terminar si dos o tres tienen la misma velocidad ## - Esto no esta en la rubrica de la tarea - ##
		System::Threading::Thread::Sleep(10);
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
	void mover() {
		x += dx;
	}
};