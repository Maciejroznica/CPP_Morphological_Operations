//
// Created by Maciej Styczeń on 26/05/2026.
//

#ifndef CPP_MORPHOLOGICAL_OPERATIONS_BITMAPA_H
#define CPP_MORPHOLOGICAL_OPERATIONS_BITMAPA_H

#include <ostream>

class Bitmapa
{
public:
    virtual unsigned length() const = 0;
    virtual unsigned width() const = 0;
    virtual bool& operator() (unsigned x, unsigned y) = 0;
    virtual bool operator() (unsigned x, unsigned y) const = 0;
    virtual ~Bitmapa() {}
};

std::ostream& operator<<(std::ostream& os, const Bitmapa& b);


#endif //CPP_MORPHOLOGICAL_OPERATIONS_BITMAPA_H