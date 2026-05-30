//
// Created by Maciej Styczeń on 30/05/2026.
//

#ifndef CPP_MORPHOLOGICAL_OPERATIONS_BITMAPAEXT_H
#define CPP_MORPHOLOGICAL_OPERATIONS_BITMAPAEXT_H
#include <deque>

#include "Bitmapa.h"



class BitmapaExt : public Bitmapa {
    public:
        // lista inicjalizacyjna konstruktora tworzy dwuwymiarową tablicę
        // wszystkie elemnty są domyślnie ustawione na false
        BitmapaExt(unsigned int length, unsigned int width) : pixels(length,std::deque<bool>(width,false)) {};

        /* Metoda przeladowuje operator () w celu otrzymania dostepu do elementu w 2-wymiarowej tablicy pixels
         * @return referencja do elementu na danej pozycji
         */
        bool& operator()(unsigned int x, unsigned int y) override;
        /* Metoda przeladowuje operator () w celu otrzymania dostepu do elementu w 2-wymiarowej tablicy pixels
         * (const oznacza ze metoda nie zmieni stalego obiektu)
         * @return element na danej pozycji
         */
        bool operator()(unsigned int x, unsigned int y) const override;

        /* Metoda zwraca dlugosc (liczbe wierszy) bitmapy
         * @return dlugosc bitmapy
         */
        unsigned int length() const override;

        /* Metoda zwraca szerokosc (liczbe kolumn) bitmapy
         * @return dlugosc bitmapy
         */
        unsigned int width() const override;
        ~BitmapaExt() override = default;
    private:

        // implementacja deque zamiast vector jest spowodowana kompresją vector<bool>, co uniemożliwia wygodny odczyt danych
        // poza zarządzaniem pamięcią deque zachowuje się w sposób identyczny jak vector
        std::deque<std::deque<bool>> pixels;
};


#endif //CPP_MORPHOLOGICAL_OPERATIONS_BITMAPAEXT_H