#pragma once
#include "Cara.h"
class Cara2 : public CaraBase {
public:
	Cara2() : CaraBase() {
		y = 240;
	}
	void mostrar(Graphics^ g) {
		//El contorno y los ojos se repite en todas las caras
		g->DrawEllipse(Pens::DarkGreen, x, y, ancho, alto);
		g->FillEllipse(Brushes::DarkGreen, x + 30, y + 40, 40, 40);
		g->FillEllipse(Brushes::DarkGreen, x + 90, y + 40, 40, 40);

		g->DrawEllipse(Pens::DarkGreen, x + 45, y+90, 70, 35);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};