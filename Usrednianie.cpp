#include "Usrednianie.h"
#include <vector>

void Usrednianie::przeksztalc(Bitmapa& b)
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

    for (unsigned int y = 0; y < b.width(); ++y) {
        for (unsigned int x = 0; x < b.length(); ++x) {

                int czarne = 0;
                int biale = 0;

                // Sprawdzamy sąsiada wyżej
                if (y > 0) {
                    if (kopia[y - 1][x] == true) {
                        czarne++;
                    }
                    else {
                        biale++;
                    }
                }

                // Sprawdzamy sąsiada niżej
                if (y < b.width() - 1) {
                    if (kopia[y + 1][x] == true) {
                        czarne++;
                    }
                    else {
                        biale++;
                    }
                }

                // Sprawdzamy sąsiada po lewej
                if (x > 0) {
                    if (kopia[y][x - 1] == true) {
                        czarne++;
                    }
                    else {
                        biale++;
                    }
                }

                // Sprawdzamy sąsiada po prawej
                if (x < b.length() - 1) {
                    if (kopia[y][x + 1] == true) {
                        czarne++;
                    }
                    else {
                        biale++;
                    }
                }

                // Jeśli ma więcej niż 2 sąsiadów w danym kolorze, zmienia kolor
                if (czarne > 2) {
                    b(x, y) = true;
                }
                else if (biale > 2) {
                    b(x, y) = false;
                }

        }
    }
}
