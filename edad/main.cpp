#include <stdio.h>

int main() {
    int nacimiento, edad;
    int actual = 2024;

    printf("Ingresa tu ano de nacimiento: ");
    scanf("%d", &nacimiento);

    edad = actual - nacimiento;

    printf("Tu edad es: %d\n", edad);

    return 0;
}
