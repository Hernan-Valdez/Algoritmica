#include <iostream>

int main() {
    double celsius, fahrenheit;

    std::cout << "Ingresa la temperatura en grados Celsius: ";
    std::cin >> celsius;


    std::cout << "La temperatura en grados Fahrenheit es: " << (celsius * 9/5) + 32 << std::endl;

    return 0;
}
