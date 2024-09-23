#include <iostream>
#include <string>

int main() {
    std::string nombreCompleto;
    int edad;

    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin, nombreCompleto);

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombreCompleto << "! Tienes " << edad << " años." << std::endl;

    return 0;
}
