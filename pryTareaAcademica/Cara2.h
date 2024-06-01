#pragma once
#include "Cara.h"
class Cara2 : public CaraBase {
public:
	Cara2() : CaraBase() {
		y = 120;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::DarkGreen, x, y, ancho, alto);
		//DIBUJO SOLO DE LA BOCA
	}
	void mostrarSeleccion(Graphics^ g) {
		mostrarSeleccionCentro();
		mostrar(g);
	}
};