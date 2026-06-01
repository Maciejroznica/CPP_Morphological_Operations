#ifndef ZEROWANIE_H
#define ZEROWANIE_H
#include "Przeksztalcenie.h"

/*
 * Klasa implementujaca filtr zerujacy obraz.
 */
class Zerowanie : public Przeksztalcenie
{
public:
    /*
     * Metoda ustawia kolor wszystkich pikseli w bitmapie na bialy (false).
     * @param b Referencja do modyfikowanej bitmapy.
     */
	void przeksztalc(Bitmapa&) override;
};

#endif
