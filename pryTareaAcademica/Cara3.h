#pragma once
#include "Cara.h"
class Cara3 : public CaraBase {
public:
	Cara3() : CaraBase() {
		y = 420;
	}
	void mostrar(Graphics^ g) {
		//El contorno y los ojos se repite en todas las caras
		g->DrawEllipse(Pens::DarkOrange, x, y, ancho, alto);
		//Los ojos tiene que ser los dos de diferentes colores
		g->FillEllipse(Brushes::DarkOrange, x + 30, y + 30, 40, 40);
		g->FillEllipse(Brushes::DarkOrange, x + 90, y + 30, 40, 40);
		//La boca tiene que ser diferente
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};