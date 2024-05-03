#include <stdio.h>

int main() {
    int cantidad, i;
    
    printf("Ingrese la cantidad de términos a mostrar: ");
    scanf("%d", &cantidad);
    
    printf("La serie es: ");
    for (i = 1; i <= cantidad; i++) {
        printf("%d ", i * 5);
    }
    
    return 0;
}