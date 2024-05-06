#include <stdio.h>
#include <math.h>

double potencia(double base, double exponente) {
    return pow(base, exponente);
}

int main() {
    double base, exponente, resultado;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    resultado = potencia(base, exponente);

    printf("%.2f elevado a la %.2f es %.2f\n", base, exponente, resultado);

    return 0;
}