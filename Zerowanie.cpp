#include "Zerowanie.h"

void Zerowanie::przeksztalc(Bitmapa& b)
{
	// Zerowanie bitmapy
	for (unsigned int y=0;y<b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			b(x, y) = false;
		}
	}
}
