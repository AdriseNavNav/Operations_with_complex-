/* Description */



/* Libraries */

#include <string>
#include <cmath>
#include "complexOperations.h"

/* Macros definition */



/* Global variables */



/* Constants */

const double precision = 0.00000000001;

/* Structs */



/* Inicialization */



/* Functions */

Complex conjC(const Complex a) {

    return {a.real, - a.img};

}

Complex addC(const Complex a, const Complex b) {

    Complex result;

    result.real = a.real + b.real;
    result.img = a.img + b.img;

    return result;

}

Complex difC(const Complex a, const Complex b) {

    Complex result;

    result.real = a.real - b.real;
    result.img = a.img - b.img;

    return result;

}

Complex mulC(const Complex a, const Complex b) {

    Complex result;

    result.real = a.real * b.real - a.img * b.img;
    result.img = a.real * b.img + a.img * b.real;

    return result;

}

bool inInterval(const double a, const double epsilon ) {

    if(a < epsilon && a > - epsilon) return true;

    return false;

}

bool equalC(const Complex a, const Complex b, const double epsilon ) {

    if(moduleC(difC(a, b)) < epsilon) return true;

    return false;

}

double mySqrt(const double a) {

    double result = a;

    if(a <= 0) return 0;

    for(int i = 0; i < 1000; i++) {

        result = 0.5 * (result + a / result);

        if(inInterval(result * result - a, precision)) return result;

    }

    return result;

}

double moduleC(const Complex a) {

    return mySqrt(a.real * a.real + a.img * a.img);

}

Complex divC(const Complex a, const Complex b) {

    Complex result;

    if(b.real == 0 && b.img == 0) return {0, 0, true};

    result = mulC(a, conjC(b));
    result.real /= b.real * b.real + b.img * b.img;
    result.img /= b.real * b.real + b.img * b.img;

    return result;

}

std::string complexToString(const Complex a) {

    std::string text;

    if(a.real > 0) {

        text = std::to_string(a.real);

    }
    else if(a.real < 0) {

        text = " - " + std::to_string(- a.real);

    }

    if(a.img > 0) {
        
        text = text + ((a.real != 0) ? " + " : "") + std::to_string(a.img) + "i";

    }
    else if(a.img < 0) {

        text = text + " - " + std::to_string(- a.img) + "i";

    }

    if(a.real == 0 && a.img == 0) text = "0";

    return text;

}

double argC(const Complex a) {

    return atan2(a.img, a.real);

}

Polar complexToPolar(const Complex a) {

    Polar result;

    if(a.real == 0 && a.img == 0) return {0, 0};

    result.radius = moduleC(a);
    result.angle = argC(a);

    return result;

}

Complex polarToComplex(const Polar a) {

    Complex result;

    result.real = a.radius * cos(a.angle);
    result.img = a.radius * sin(a.angle);

    return result;

}

Complex powC(const Complex a, const Complex n) {

    Polar resultP;
    Polar base = complexToPolar(a);

    if(a.real == 0 && a.img == 0 ) {

        if(n.real == 0 && n.img == 0) return {1, 0};
        else return {0, 0};

    }

    resultP.radius = exp(n.real * log(base.radius) - n.img * base.angle);
    resultP.angle = n.img * log(base.radius) + n.real * base.angle;

    return polarToComplex(resultP);

}

std::string polarToString(const Polar a) {

    std::string text;

    if(a.radius == 0) return "0";

    text = std::to_string(a.radius) + " * " + "( cos( " + std::to_string(a.angle) + " ) + i sen( " + std::to_string(a.angle) + " )";

    return text;

}