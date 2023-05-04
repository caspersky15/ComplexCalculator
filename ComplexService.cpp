#include <iostream>
#include <fstream>
#include <vector>
#include "ComplexService.h"
#include "Complex.h"

void ComplexService::display() {
    for(auto i : v) {
        std::cout << i << std::endl;
    }
}
void ComplexService::read(std::string filename) {
    double real, imaginary;
    std::ifstream file(filename);
    if(!file.is_open()) return;

    while (!file.eof()) {
        file >> real >> imaginary;
        v.push_back(Complex(real, imaginary));
    }
    v.pop_back();

    file.close();
}

void ComplexService::log(std::string filename) {
    std::ofstream file(filename);
    if(!file.is_open()) return;

   for(Complex c : v) {
   file << c.getr() << " " << c.geti() << "\n";
   }

    file.close();
}

void ComplexService::insert(const Complex& c){
    v.push_back(c);
}