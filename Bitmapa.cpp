//
// Created by Maciej Styczeń on 26/05/2026.
//

#include "Bitmapa.h"

std::ostream& operator<<(std::ostream& os, const Bitmapa& b)
{
	// Wysokość (oś Y)
	for (unsigned int y = 0;y<b.length();y++)
	{
		// Szerokość (oś X)
		for (unsigned int x = 0;x < b.width();x++)
		{
			// Pobieramy wartość piksela.
			if (b(y,x))
			{
				os << "1";
			}else
			{
				os << "0";
			}

			// Spacja między cyframi
			if (x<b.width()-1)
			{
				os << " ";
			}
		}
		os << "\n";
	}
	return os;
}