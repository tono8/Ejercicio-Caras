#pragma once
#include "Cara.h"
class Cara3 : public CaraBase {
public:
	Cara3() : CaraBase() {
		y = 220;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::DarkOrange, x, y, ancho, alto);
		//DIBUJO SOLO DE LA BOCA
	}
	void mostrarSeleccion(Graphics^ g) {
		mostrarSeleccionCentro();
		mostrar(g);
	}
};