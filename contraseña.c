#include <stdio.h>
#include <string.h>



int main() {
    int cantidad;
    float precioUnitario;
    float importeTotal = 0;
    char nombre[50];
    char contrasena[50];
    int intentos = 3;

 do {
        printf("Introduce tu nombre: ");
        scanf("%s", nombre);

        printf("Introduce tu contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "Ailyn") == 0 && strcmp(contrasena, "2B42") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contraseña incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                break;
            }
        }
    } while (intentos > 0);

    printf("Bienvenido al sistema de facturación.\n");
    printf("Por favor introduce la cantidad y el precio unitario de cada artículo.\n");
    printf("Cuando hayas terminado, introduce 0 en la cantidad para finalizar.\n\n");

    do {
        printf("Cantidad: ");
        scanf("%d", &cantidad);
        if (cantidad == 0) {
            break; 
        }

        printf("Precio unitario: ");
        scanf("%f", &precioUnitario);

       
        if (cantidad < 0 || precioUnitario < 0) {
            printf("Error: la cantidad y el precio deben ser números positivos.\n\n");
            continue; 
        }

        
        float importe = cantidad * precioUnitario;
        importeTotal += importe;

    } while (cantidad != 0);

    
    printf("\nImporte total de la factura: %.2f\n", importeTotal);

    return 0;

}
