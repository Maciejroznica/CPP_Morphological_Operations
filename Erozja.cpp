#include "Erozja.h"
#include <vector>

void Erozja::przeksztalc(Bitmapa& b)
{
	// Tworzymy kopie obecnego stanu bitmapy
	std::vector<std::vector<bool>> kopia(b.width(), std::vector<bool>(b.length()));
	for (unsigned int y = 0;y < b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			kopia[y][x] = b(x, y);
		}
	}

	// Erozja
	for (unsigned int y = 0;y < b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			if (kopia[y][x] == true){ // Jeśli jest czarny
				bool maBialegoSasiada = false;

				// Sprawdzamy sąsiadów góra, dół, lewo, prawo
				if (y > 0 && kopia[y - 1][x] == false) maBialegoSasiada = true;
				if (y < b.width() - 1 && kopia[y + 1][x] == false) maBialegoSasiada = true;
				if (x > 0 && kopia[y][x - 1] == false) maBialegoSasiada = true;
				if (x < b.length() - 1 && kopia[y][x + 1] == false) maBialegoSasiada = true;

				if (maBialegoSasiada)
				{
					b(x, y) = false; // Malujemy na biało brzeg
				}
			}
		}
	}
}
