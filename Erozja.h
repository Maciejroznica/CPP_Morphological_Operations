#ifndef EROZJA_H
#define EROZJA_H
#include "Przeksztalcenie.h"

/*
 * Klasa implementujaca filtr erozji (odchudzania elementow).
 */
class Erozja : public Przeksztalcenie
{
public:
    /*
     * Metoda lokalizuje piksele brzegowe (czarne sasiadujace z bialym) i zmienia ich kolor na bialy.
     * @param b Referencja do modyfikowanej bitmapy.
     */
	void przeksztalc(Bitmapa&) override;
};

#endif
