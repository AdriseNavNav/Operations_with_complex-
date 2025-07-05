/* Description */



/* Libraries */

#include <iostream>
#include "complexOperations.h"

/* Macros definition */



/* Global variables */



/* Constants */



/* Structs */



/* Inicialization */



/* Functions */



/* Main */

int main(){

    Complex x, y, z;
    
    std::cout << "Ingresa la parte real del primer número: ";
    std::cin >> x.real;
    std::cout << "Ingresa la parte imaginaria del primer número: ";
    std::cin >> x.img;
    std::cout << "Ingresa la parte real del segundo número: ";
    std::cin >> y.real;
    std::cout << "Ingresa la parte imaginaria del segundo número: ";
    std::cin >> y.img;

    z = addC(x, y);
    std::cout << "Suma: " + complexToString(z) << std::endl;
    z = difC(x, y);
    std::cout << "Diferencia: " + complexToString(z) << std::endl;
    z = mulC(x, y);
    std::cout << "Multiplicación: " + complexToString(z) << std::endl;
    z = divC(x, y);
    std::cout << "División: " + complexToString(z) << std::endl;
    z = conjC(x);
    std::cout << "Conjugado del primero: " + complexToString(z) << std::endl;
    z = conjC(y);
    std::cout << "Conjugado del segundo: " + complexToString(z) << std::endl;
    z = {moduleC(x), 0};
    std::cout << "Modulo del primero: " + complexToString(z) << std::endl;
    z = {moduleC(y), 0};
    std::cout << "Modulo del segundo: " + complexToString(z) << std::endl;
    z = {argC(x), 0};
    std::cout << "Argumento del primero: " + complexToString(z) << std::endl;
    z = {argC(y), 0};
    std::cout << "Argumento del segundo: " + complexToString(z) << std::endl;
    std::cout << "Polar del primero: " + polarToString(complexToPolar(x)) << std::endl;
    std::cout << "Polar del segundo: " + polarToString(complexToPolar(y)) << std::endl;
    std::cout << "Cartesiano del primero: " + complexToString(polarToComplex(complexToPolar(x))) << std::endl;
    std::cout << "Cartesiano del segundo: " + complexToString(polarToComplex(complexToPolar(y))) << std::endl;
    std::cout << "Primero elevado al segundo: " + complexToString(powC(x, y)) << std::endl;
    std::cout << "Segundo elevado al primero: " + complexToString(powC(y, x)) << std::endl;

    return 0;

}