#ifndef USREDNIANIE_H
#define USREDNIANIE_H
#include "Przeksztalcenie.h"

/*
 * Klasa implementujaca filtr uśredniający.
 */
class Usrednianie : public Przeksztalcenie
{
public:
    /*
     * Metoda sprawdza liczbe sasiadow (czarnych i bialych) dla kazdego piksela.
     * Jesli piksel ma wiecej niz 2 sasiadow w danym kolorze, sam przyjmuje ten kolor.
     * @param b Referencja do modyfikowanej bitmapy.
     */
	void przeksztalc(Bitmapa&) override;
};

#endif
