#include <stdio.h>

int main() {
    char nombre[50], apellido[50];

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    printf("Ingresa tu apellido: ");
    scanf("%s", apellido);

    printf("El nombre que ingresaste es: %s %s\n", nombre, apellido);

    return 0;
}
