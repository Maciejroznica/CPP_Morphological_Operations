//
// Created by Maciej Styczeń on 01/06/2026.
//

#ifndef CPP_MORPHOLOGICAL_OPERATIONS_ZLOZENIEPRZEKSZTALCEN_H
#define CPP_MORPHOLOGICAL_OPERATIONS_ZLOZENIEPRZEKSZTALCEN_H
#include "MyExceptions.h"
#include "Przeksztalcenie.h"

// Przez użycie szablonu klasy można wybrać rodzaj kontenera przechowującego kolejność filtrów wywołanych na bitmapie
template <typename T>
class ZlozeniePrzeksztalcen : public Przeksztalcenie {

    public:
    /* metoda chronologicznie dodaje operację na bitmapie do kolejki
     * @param p wskaźnik na klasę przekształcenia
     */
    void dodajPrzeksztalcenie(Przeksztalcenie* p) {
        // jeśli przekazano pusty wskaźnik
        if (p == nullptr) {
            // rzucenie wyjątku, koniec dzialania funkcji
            throw MyExceptions("Błąd: wykryto pusty wskaźnik");
        }
        // zabezpieczenie przed dodaniem obiektu do samego siebie
        if (p == this) {
            throw MyExceptions("Błąd: próba dodania złożenia do samego siebie");
        }
        // dodanie przekształcenia do kolejki
        filtry.push_back(p);
    };
    /* metoda wykonuje operacje w kolejce na podanej bitmapie
    * @param b bitmapa przekazana przez referencje
     */
    void przeksztalc(Bitmapa& b) override {
        // dla każdego elementu w tablicy filtry
        for (auto i : filtry) {
            // wywołujemy metodę przeksztalc dla danego filtru przekazując bitmape w argumencie
            i->przeksztalc(b);
        }
    }
    private:
    // tablica przechowująca filtry do wywołania na bitmapie
    T filtry;

};


#endif //CPP_MORPHOLOGICAL_OPERATIONS_ZLOZENIEPRZEKSZTALCEN_H