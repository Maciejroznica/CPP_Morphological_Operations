//
// Created by Maciej Styczeń on 30/05/2026.
//

#include "BitmapaExt.h"
#include "MyExceptions.h"

#include <iostream>

bool& BitmapaExt::operator()(unsigned int x, unsigned int y) {
    // sprawdzenie czy nie wychodzimy poza zakres tablicy
    if (x>=pixels.size() || y>=pixels.at(0).size()) {
        // z rzuceniem wyjątku funkcja kończy działanie
        throw MyExceptions("Wyjście poza rozmiar tablicy");
    }
    // zwrócenie wartości na danej pozycji
    return pixels.at(x).at(y);
};

bool BitmapaExt::operator()(unsigned int x, unsigned int y) const {
    // sprawdzenie czy nie wychodzimy poza zakres tablicy
    if (x>=pixels.size() || y>=pixels.at(0).size()) {
        // z rzuceniem wyjątku funkcja kończy działanie
        throw MyExceptions("Wyjście poza rozmiar tablicy");
    }
    // zwrócenie wartości na danej pozycji
    return pixels.at(x).at(y);
};

unsigned int BitmapaExt::length() const {
    return pixels.size();
}

unsigned int BitmapaExt::width() const {
    return pixels.at(0).size();
}