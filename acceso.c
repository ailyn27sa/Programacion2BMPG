#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("dame el primer numero");
    scanf("%d", &n1);
    printf ("dame el segundo numero");
    scanf ("%d", &n2);
    printf("dame el tercer numero");
    scanf("%d", &n3);
    if (n1 ==1 && n2 ==2 && n3 ==3){
    printf("acesso permitido\n");}
    else { printf("acceso denegado");}
    
    return 0;
}