#include <stdio.h>

int main()
{
    char caracter;
    
    printf("Introduce un caracter: ");
    scanf(" %c", &caracter);
    
    switch(caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c es una vocal.\n", caracter);
            break;
        default:
            printf("%c no es una vocal.\n", caracter);
    }
    
    return 0;
}