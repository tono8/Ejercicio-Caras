#pragma once
using namespace System::Drawing;
class CaraBase //Se establece el tamaño y posicion de los ojos debido a que se repite
{
protected:
	int x, y;
	int ancho, alto;
	int dx;
public:
	CaraBase() {
		x = 20;
		alto = ancho = 80;//dependiendo del diseño elegido se cambia este parametro
		System::Random v;
		dx = v.Next(5, 16);
		System::Threading::Thread::Sleep(10);
	};
	~CaraBase() {};
	void mostrarBase(Graphics^ g) {
		g->DrawEllipse(Pens::Blue, x, y, ancho, alto);
	}
	void Reset() {
		x = 20;
		System::Random r;
		dx = r.Next(5, 16);
		System::Threading::Thread::Sleep(10);
	}
	Rectangle getArea() {
		return Rectangle(x, y, ancho, alto);
	}
	void mover() {
		x += dx;
	}
};