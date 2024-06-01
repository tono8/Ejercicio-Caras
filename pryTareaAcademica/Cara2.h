#pragma once
#include "Cara.h"
class Cara2 : public CaraBase {
public:
	Cara2() : CaraBase() {
		y = 240;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::DarkGreen, x, y, ancho, alto);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};