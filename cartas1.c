#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    switch(numero) {
        case 1:
            printf("Az\n");
            break;
        case 10:
            printf("Sota\n");
            break;
        case 11:
            printf("Caballo\n");
            break;
        case 12:
            printf("Rey\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("No es ninguna figura\n");
            break;
        default:
            printf("Este no es un número de una baraja española\n");
    }

    return 0;
}