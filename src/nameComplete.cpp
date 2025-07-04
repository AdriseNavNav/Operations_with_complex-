#include <iostream>
#include <string>
#include "nameComplete.h"

std::string nameComplete() {

    std::string name, surname;

    std::cout << "Ingresa tu nombre: ";
    std::cin >> name;
    std::cout << "Ingresa tu apellido: ";
    std::cin >> surname;

    return name + " " + surname;

}