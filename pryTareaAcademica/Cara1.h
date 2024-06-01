#pragma once
#include "Cara.h"
class Cara1 : public CaraBase {
public:
	Cara1() : CaraBase() {
		y = 20;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::Blue, x, y, ancho, alto);
		//DIBUJO SOLO DE LA BOCA
		Pen^ lapicero = gcnew Pen(Color::Aquamarine, 5);
		lapicero->LineJoin = Drawing2D::LineJoin::Miter;
		g->DrawLine(lapicero, 290, 180, 330, 180); 
	}
	void mostrarSeleccion(Graphics^ g) {
		mostrarSeleccionCentro();
		mostrar(g);
	}
	void mostrarSeleccion(Graphics^ g) {
		mostrarSeleccionCentro();
		mostrar(g);
	}
};