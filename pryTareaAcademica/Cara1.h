#pragma once
#include "Cara.h"
class Cara1 : public CaraBase {
public:
	Cara1() : CaraBase() {
		y = 20;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::Aquamarine, x, y, ancho, alto);
		Pen^ lapicero = gcnew Pen(Color::Aquamarine, 5);
		lapicero->LineJoin = Drawing2D::LineJoin::Miter;
		g->DrawLine(lapicero, x + 100, y + 120, x + 60, y + 120);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};