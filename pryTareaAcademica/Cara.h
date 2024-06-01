#pragma once
using namespace System::Drawing;
class CaraBase //Se establece el tamaño y posicion de los ojos debido a que se repite
{
protected:
	int x, y;
	int ancho, alto;
	int dx;
public:
	CaraBase() {
		x = 20;
		alto = ancho = 160;//dependiendo del diseño elegido se cambia este parametro
		System::Random v;
		dx = v.Next(5, 16);
		System::Threading::Thread::Sleep(10);
	};
	~CaraBase() {};
	// Seria mejor que aqui se dibuje el circulo de la cara y los ojos
	// en las clases cara1, cara2 y cara3 solo se establece el diseño de la boca
	//void mostrarBase(Graphics^ g) {
	//	g->DrawEllipse(Pens::Blue, x, y, ancho, alto);
	//}
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