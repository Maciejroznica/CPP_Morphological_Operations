#ifndef INWERSJA_H
#define INWERSJA_H
#include "Przeksztalcenie.h"

/*
 * Klasa implementujaca filtr inwersji.
 */
class Inwersja : public Przeksztalcenie
{
public:
    /*
     * Metoda zamienia wszystkie biale piksele na czarne, a czarne piksele na biale.
     * @param b Referencja do modyfikowanej bitmapy.
     */
	void przeksztalc(Bitmapa&) override;
};

#endif
