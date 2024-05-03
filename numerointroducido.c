#include <stdio.h>

int main() {
    int numero, suma = 0, contador = 0;
    
    do {
        printf("Introduce un número (0 para finalizar): ");
        scanf("%d", &numero);
        
        if(numero != 0) {
            printf("Has introducido el número %d.\n", numero);
            suma += numero;
            contador++;
        }
    } while(numero != 0);
    
    printf("Finalizando: Se ha introducido el número 0.\n");
    printf("Cantidad de números introducidos: %d\n", contador);
    printf("Suma de los números introducidos: %d\n", suma);
    
    return 0;
}