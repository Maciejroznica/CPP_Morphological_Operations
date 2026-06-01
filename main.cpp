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
    try {
        // utworzenie bitmapy 5x5
        BitmapaExt aa(7,7);


        try {
            // wprowadzenie wzoru z przykladu
            aa(3, 1) = true;
            aa(2, 2) = aa(3, 2) = aa(4, 2) = true;
            aa(1, 3) = aa(2, 3) = aa(3, 3) = aa(4, 3) = aa(5, 3) = true;
            aa(2, 4) = aa(3, 4) = aa(4, 4) = true;
            aa(3, 5) = true;
        }
        catch (std::exception& error) {
            std::cerr<< error.what() << "\n";
        }


        // przeladowany operator pozwala na wygodne wypisanie calej bitmapy
        std::cout << aa << "\n";

        // tworzenie filtrow
        Usrednianie u;
        Dylatacja d;
        Inwersja i;
        Erozja e;
        Zerowanie zer;

        // stworzenie zlozenia, podajac std::vector jako kontener na wskazniki na filtry
        ZlozeniePrzeksztalcen<std::vector<Przeksztalcenie*>> z;


        try {
            // dodanie przeksztalcen do kolejki
            z.dodajPrzeksztalcenie(&u);
            z.dodajPrzeksztalcenie(&d);
            z.dodajPrzeksztalcenie(&i);
            z.dodajPrzeksztalcenie(&e);
        }
        catch (std::exception& error) {
            std::cerr<< error.what() <<"\n";
        }

        try {
            // wywolanie przekształceń zgodnie z kolejką
            z.przeksztalc(aa);
        }
        catch (std::exception& error) {
            std::cerr<< error.what() <<"\n";
            return 1;
        }

        std::cout << aa << "\n";


        z.dodajPrzeksztalcenie(&zer);

        z.przeksztalc(aa);

        std::cout << aa << "\n";
    }
    catch (std::exception& error) {
        std::cerr << error.what();
        return 1;
    }

    return 0;
}