#include <stdio.h>

int main()
{
    int i;
    int numeros [5];
    int menor;
    
    printf("ingresa 5 numeros enteros\n");
    for ( i =0; i < 5; i++){
        printf( "numero %d", i + 1);
        scanf("%d", &numeros[i]);
    }
    menor = numeros [0];
    for ( i =0; i < 5; i++){
        if(numeros[i]< menor){
            menor = numeros[i];
        }
    }
    printf ("el menor numero ingresado es %d\n",menor);

    return 0;
}