#pragma once
using namespace System::Drawing;
class Cara
{
private:
	int x, y;
	int ancho, alto;
	int dx;
public:
	Cara() {
		x = 20;
		alto = ancho = 80;//dependiendo del diseño elegido se cambia este parametro
		System::Random v;
		dx = v.Next(5, 16);
		System::Threading::Thread::Sleep(10);
	};
	~Cara() {};
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