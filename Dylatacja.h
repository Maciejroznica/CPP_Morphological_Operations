#ifndef DYLATACJA_H
#define DYLATACJA_H
#include "Przeksztalcenie.h"

/*
 * Klasa implementujaca filtr dylatacji.
 */
class Dylatacja : public Przeksztalcenie
{
public:
    /*
     * Metoda zamienia biale piksele na czarne, jesli sasiaduja one z przynajmniej jednym czarnym pikselem.
     * @param b Referencja do modyfikowanej bitmapy.
     */
	void przeksztalc(Bitmapa&) override;
};

#endif
