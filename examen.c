#include <stdio.h>

int main() {
    double base, exponente, resultado = 1.0;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    printf("%.2f elevado a la %.2f es %.2f\n", base, exponente, resultado);

    return 0;
}