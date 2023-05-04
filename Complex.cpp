#include <cmath>
#include <complex>
#include <iostream>
#include "Complex.h"

    Complex::Complex(): r(0.0), i(0.0){}
    Complex::Complex(double r, double i) : r(r), i(i) {}
    double Complex::getr(){return r;}
    double Complex::geti(){return i;}
    void Complex::read() {
        std::cout << "GIVE REAL: " << std::endl;
        std::cin >> r;
        std::cout << "GIVE IMAGINARY: " << std::endl;
        std::cin >> i;
    }

    Complex Complex::operator+(Complex c) {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }
    Complex Complex::operator-(Complex c) {
        Complex temp;
        temp.r = r - c.r;
        temp.i = i - c.i;
        return temp;
    }
    Complex Complex::operator*(Complex c) {
        Complex temp;
        temp.r = (r*c.r) + (-1 * (i * c.i));
        temp.i = (i * c.r) + (r * c.i);
        return temp;
    }
    Complex Complex::operator/(Complex c) {
        Complex temp, cn, den, num;
        cn = ~c;
        num = (*this) * (cn);
        den = c * cn;
        temp.r = num.r / den.r;
        temp.i = num.i / den.i;
    return temp;
    }
    Complex Complex::operator~(void) {
        Complex temp;
        temp.r = r;
        temp.i = -1 * i;
    return temp;
    }


std::ostream& operator<< (std::ostream & os, const Complex& c){ 
    if(c.i >= 0) os << c.r << "+i" << c.i;
    else os << c.r << "-i" << (-1)*c.i;
    return os;
}