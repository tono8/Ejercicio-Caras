#pragma once
#include "Cara.h"
class Cara3 : public CaraBase {
public:
	Cara3() : CaraBase() {
		y = 420;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::DarkOrange, x, y, ancho, alto);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};