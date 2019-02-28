#pragma once
#include <Windows.h>

#define BLANCO_AZUL (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE)
#define BLANCO_NEGRO (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED)
#define ROJO_AZUL (FOREGROUND_RED | BACKGROUND_BLUE)
#define VERDE_AZUL (FOREGROUND_GREEN | BACKGROUND_BLUE)

namespace consola {
	void maximizar();
	void limpiar(unsigned int = 0, unsigned int = 0,unsigned int = 0);
	void posicionXY(int, int);
	void colorTexto(WORD);
	void linea(int = 0, int = 0, int = 100, int = 100, int = 2, COLORREF = RGB(0,0,0));
	bool teclaPulsada(int);
}