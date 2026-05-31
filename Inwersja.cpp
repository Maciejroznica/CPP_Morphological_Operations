
#include "Inwersja.h"

void Inwersja::przeksztalc(Bitmapa& b)
{
	// Negacja całej bitmapy
	for (unsigned int y = 0;y < b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			b(x, y) = !b(x,y);
		}
	}
}
