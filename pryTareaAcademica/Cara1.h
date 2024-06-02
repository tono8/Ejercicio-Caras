#pragma once
#include "Cara.h"
class Cara1 : public CaraBase {
public:
	Cara1() : CaraBase() {
		y = 60;
	}
	void mostrar(Graphics^ g) {
		//El contorno y los ojos se repite en todas las caras
		g->DrawEllipse(Pens::Navy, x, y, ancho, alto);
		//Los ojos tiene que ser los dos de diferentes colores
		g->FillEllipse(Brushes::Orange, x + 30, y + 40, 40, 40);
		g->FillEllipse(Brushes::Orange, x + 90, y + 40, 40, 40);
		//La boca tiene que ser diferente
		Pen^ lp2 = gcnew Pen(Color::Chocolate, 5);
		g->DrawLine(lp2, x + 100, y + 120, x + 60, y + 120);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};