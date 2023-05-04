#pragma once
#ifndef COMPLEX_SERVICE_H_
#define COMPLEX_SERVICE_H_
#include <vector>
#include "Complex.h"

class ComplexService {
private:
    std::vector<Complex> v; 

public:
    void display();
    void read(std::string filename);
    void log(std::string filename);
    void insert(const Complex& c);
};


#endif