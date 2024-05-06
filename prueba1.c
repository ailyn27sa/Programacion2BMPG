#include "stdio.h"
int main(){
	
	int x, i;
	int suma = 0;
	int mayor = -999;
	int menor = 999;
	int cmayor = 0;
	int cmenor = 0;


	printf("ingrese los 10 numeros: ");
	for(i=1; i<=10; i++){
	scanf("%i", &x);
	suma=suma+x;
	if(x>x){
		mayor=x;
		cmayor=1;
	}else if(x==mayor)
		cmayor=cmayor+1;
		if(x<menor){
		   menor=x;
		   cmenor=1;
		} else if(x==menor)
		cmenor=cmenor+1;
	}
	
	    printf("la suma de todos los numeros es %i\n", suma);
	
		printf("%i es el numero mayor\n", mayor);
	
		printf("%i es el numero menor\n", menor);
	
        return 0;
}
