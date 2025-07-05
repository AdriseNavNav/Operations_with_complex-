#ifndef COMPLEX_OPERATION_H
#define COMPLEX_OPERATION_H

#include <string>

typedef struct {

    double real;
    double img;
    bool none;

} Complex;

typedef struct {

    double radius;
    double angle;
    bool none;

} Polar;

Complex addC(const Complex a, const Complex b);

Complex difC(const Complex a, const Complex b);

Complex mulC(const Complex a, const Complex b);

Complex divC(const Complex a, const Complex b);

Complex conjC(const Complex a);

Complex intPowC(const Complex a, const int n);

Complex polarToComplex(const Polar a);

Complex powC(const Complex a, const Complex n);

double moduleC(const Complex a);

double argC(const Complex a);

bool equalC(const Complex a, const Complex b, const double epsilon );

Polar complexToPolar(const Complex a);

std::string complexToString(const Complex a);

std::string polarToString(const Polar a);

#endif