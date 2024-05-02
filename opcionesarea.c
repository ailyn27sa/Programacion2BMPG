#include <stdio.h>

// Función para calcular el área de un triángulo
float atri(float b, float a) {
    return (b * a) / 2;
}

// Función para calcular el área de un trapecio
float atra(float bm, float bmr, float altura) {
    return ((bm + bmr) * altura) / 2;
}

// Función para calcular el área de un rectángulo
float ar(float base, float altura) {
    return base * altura;
}

int main() {
    int opcion;
    float base, altura, bme, bm;

    printf("Menu de calculo de areas\n");
    printf("1. Calcular el area de un triangulo\n");
    printf("2. Calcular el area de un trapecio\n");
    printf("3. Calcular el area de un rectangulo\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            printf("El area del triangulo es: %.2f\n", atri(base, altura));
            break;
        case 2:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%f", &bm);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &bme);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &altura);
            printf("El area del trapecio es: %.2f\n", atra(bm, bme, altura));
            break;
        case 3:
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            printf("El area del rectangulo es: %.2f\n", ar(base, altura));
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}