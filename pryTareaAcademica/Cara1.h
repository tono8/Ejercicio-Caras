#pragma once
#include "Cara.h"
class Cara1 : public CaraBase {
public:
	Cara1() : CaraBase() {
		y = 60;
	}
	void mostrar(Graphics^ g) {
		g->DrawEllipse(Pens::Aquamarine, x, y, ancho, alto);
		g->FillEllipse(Brushes::Aquamarine, x + 30, y + 40, 40, 40);
		g->FillEllipse(Brushes::Aquamarine, x + 90, y + 40, 40, 40);
		Pen^ lp2 = gcnew Pen(Color::Aquamarine, 5);
		//lp2->LineJoin = Drawing2D::LineJoin::Miter;//al hacerlo comentario no hace errores
		g->DrawLine(lp2, x + 100, y + 120, x + 60, y + 120);
	}
	void mostrarSeleccion(Graphics^ g) {
		g->Clear(SystemColors::Control);
		mostrarSeleccionCentro();
		mostrar(g);
	}
};