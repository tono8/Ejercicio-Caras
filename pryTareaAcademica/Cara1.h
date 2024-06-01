#pragma once
#include "Cara.h"
class Cara1 : public CaraBase {
public:
	Cara1() : CaraBase() {
		y = 20;
	}
	void mostrar(Graphics^ g) {
		//DIBUJO SOLO DE LA BOCA
	}
};