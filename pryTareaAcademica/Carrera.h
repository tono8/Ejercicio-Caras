#pragma once
#include "Cara1.h"
#include "Cara2.h"
#include "Cara3.h"

class Carrera {
private:
	Cara1* cara1;
	Cara2* cara2;
	Cara3* cara3;
	int meta;
public:
	Carrera() {
		cara1 = new Cara1();
		cara2 = new Cara2();
		cara3 = new Cara3();
		meta = 570;
	}
	~Carrera() {
		delete cara1;
		delete cara2;
		delete cara3;
	}
	void mover() {
		cara1->mover();
		cara2->mover();
		cara3->mover();
	}
	void mostrar(Graphics^ g) {
		g->Clear(Color::White);
		Rectangle recMeta = Rectangle(meta, 0, 2, g->VisibleClipBounds.Bottom);//Ignora la ambiguedad aqui
		g->FillRectangle(Brushes::Gold, recMeta);
		cara1->mostrar(g);
		cara2->mostrar(g);
		cara3->mostrar(g);
		if (recMeta.IntersectsWith(cara1->getArea())) {

		}
		if (recMeta.IntersectsWith(cara2->getArea())) {

		}
		if (recMeta.IntersectsWith(cara3->getArea())) {

		}
	}
};