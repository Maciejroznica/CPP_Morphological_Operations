#include "Dylatacja.h"
#include <vector>

#include "MyExceptions.h"

void Dylatacja::przeksztalc(Bitmapa& b)
{
	// sprawdzenie poprawnosci wymiarow przed utworzeniem konetenera
	if (b.length() == 0 || b.width() == 0) {
		throw MyExceptions("Błąd: Wymiary bitmapy muszą być większe niż 0");
	}

	// Tworzymy kopie obecnego stanu bitmapy
	std::vector<std::vector<bool>> kopia(b.width(), std::vector<bool>(b.length()));
	for (unsigned int y = 0;y < b.width();y++)
	{
		for (unsigned int x = 0;x < b.length();x++)
		{
			kopia[y][x] = b(x, y);
		}
	}

    // Dylatacja
    for (unsigned int y = 0; y < b.width(); ++y) {
        for (unsigned int x = 0; x < b.length(); ++x) {

            if (kopia[y][x] == false) { // Jeśli jest biały
                bool maCzarnegoSasiada = false;

                if (y > 0 && kopia[y - 1][x] == true) maCzarnegoSasiada = true;
                if (y < b.width() - 1 && kopia[y + 1][x] == true) maCzarnegoSasiada = true;
                if (x > 0 && kopia[y][x - 1] == true) maCzarnegoSasiada = true;
                if (x < b.length() - 1 && kopia[y][x + 1] == true) maCzarnegoSasiada = true;

                if (maCzarnegoSasiada) {
                    b(x, y) = true; // Pogrubiamy o czarne pole
                }
            }
        }
    }
}
