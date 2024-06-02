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
		//Los ojos tiene que ser los dos de diferentes colores
		g->FillEllipse(Brushes::DarkGreen, x + 30, y + 30, 40, 40);
		g->FillEllipse(Brushes::DarkGreen, x + 90, y + 30, 40, 40);
		//La boca tiene que ser diferente
		g->FillEllipse(Brushes::DarkGreen, x + 45, y + 100, 70, 35);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};