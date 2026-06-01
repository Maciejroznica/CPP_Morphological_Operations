
#include "Inwersja.h"

#include "MyExceptions.h"

void Inwersja::przeksztalc(Bitmapa& b)
{
	// sprawdzenie poprawnosci wymiarow przed utworzeniem konetenera
	if (b.length() == 0 || b.width() == 0) {
		throw MyExceptions("Błąd: Wymiary bitmapy muszą być większe niż 0");
	}

	// Negacja całej bitmapy
	for (unsigned int y = 0;y < b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			b(x, y) = !b(x,y);
		}
	}
}
