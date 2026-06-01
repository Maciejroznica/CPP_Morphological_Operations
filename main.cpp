#include <iostream>
#include <vector>
#include "BitmapaExt.h"
#include "Usrednianie.h"
#include "Dylatacja.h"
#include "Erozja.h"
#include "Inwersja.h"
#include "Zerowanie.h"
#include "ZlozeniePrzeksztalcen.h"

int main() {
    // utworzenie bitmapy 5x5
    BitmapaExt aa(5,5);

    // wprowadzenie wzoru z przykladu
    aa(1, 1) = aa(2, 1) = aa(3, 1) = aa(2, 2) = aa(1, 3) = aa(2,3) = aa(3, 3) = true;


    // przeladowany operator pozwala na wygodne wypisanie calej bitmapy
    std::cout << aa << "\n";

    // tworzenie filtrow
    Usrednianie u;
    Dylatacja d;
    Inwersja i;
    Erozja e;
    //Zerowanie zer;

    // stworzenie zlozenia, podajac std::vector jako kontener na wskazniki na filtry
    ZlozeniePrzeksztalcen<std::vector<Przeksztalcenie*>> z;

    // dodanie przeksztalcen do kolejki
    z.dodajPrzeksztalcenie(&u);
    z.dodajPrzeksztalcenie(&d);
    z.dodajPrzeksztalcenie(&i);
    z.dodajPrzeksztalcenie(&e);

    // wywolanie przekształceń zgodnie z kolejką
    z.przeksztalc(aa);

    std::cout << aa << "\n";


    //z.dodajPrzeksztalcenie(&z);

    z.przeksztalc(aa);

    std::cout << aa << "\n";

    return 0;
}