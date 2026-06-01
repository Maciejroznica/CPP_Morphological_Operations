//
// Created by Maciej Styczeń on 30/05/2026.
//

#ifndef CPP_MORPHOLOGICAL_OPERATIONS_MYEXCEPTIONS_H
#define CPP_MORPHOLOGICAL_OPERATIONS_MYEXCEPTIONS_H
#include <stdexcept>


class MyExceptions : public std::runtime_error {
public:
    MyExceptions(const std::string& message) : std::runtime_error(message) {}
};


#endif //CPP_MORPHOLOGICAL_OPERATIONS_MYEXCEPTIONS_H