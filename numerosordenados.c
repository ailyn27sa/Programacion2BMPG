#include <stdio.h>

int main()
{
     int n1, n2, n3;

    printf("Introduce el primer número: ");
    scanf("%d", &n1);

    printf("Introduce el segundo número: ");
    scanf("%d", &n2);

    printf("Introduce el tercer número: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Los números ordenados de menor a mayor son: %d, %d, %d\n", n1, n2, n3);

    return 0;
