#pragma once
#include "Cara.h"
class Cara3 : public CaraBase {
public:
	Cara3() : CaraBase() {
		y = 420;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::DarkOrange, x, y, ancho, alto);
		g->FillEllipse(Brushes::DarkOrange, x + 30, y + 40, 40, 40);
		g->FillEllipse(Brushes::DarkOrange, x + 90, y + 40, 40, 40);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};