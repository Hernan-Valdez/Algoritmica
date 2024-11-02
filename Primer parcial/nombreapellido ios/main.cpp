#include <iostream>

int main() {
    std::string nombre, apellido;

    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingresa tu apellido: ";
    std::getline(std::cin, apellido);

    std::cout << "El nombre que ingresaste es: " << nombre << " " << apellido << std::endl;

    return 0;
}
