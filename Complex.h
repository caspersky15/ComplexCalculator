#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
private:
    double r;
    double i;
public:
    Complex();
    Complex(double r, double i);
    double getr();
    double geti();
    void read();
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    Complex operator/(Complex c);
    Complex operator~(void);
    friend std::ostream& operator<< (std::ostream & os, const Complex& c);

};

#endif