//
// Created by Maciej Styczeń on 26/05/2026.
//

#include "Bitmapa.h"

std::ostream& operator<<(std::ostream& os, const Bitmapa& b)
{
	// Wysokość (oś Y)
	for (unsigned int y = 0;y<b.width();y++)
	{
		// Szerokość (oś X)
		for (unsigned int x = 0;x < b.length();x++)
		{
			// Pobieramy wartość piksela.
			if (b(x,y))
			{
				os << "1";
			}else
			{
				os << "0";
			}

			// Spacja między cyframi
			if (x<b.length()-1)
			{
				os << " ";
			}
		}
		os << "\n";
	}
	return os;
}