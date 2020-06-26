#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;
class Fraction{

private:
    int num;    // numerator
    int den;    // denominator

public:
    Fraction(int, int);

    int getNum();
    void setNum(int);

    int getDen();
    void setDen(int);

    void print();
    Fraction operator*(Fraction);

};

#include "Fraction.tpp"
#endif // FRACTION_H
