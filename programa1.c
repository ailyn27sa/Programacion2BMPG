#include <stdio.h>

#define HORAS_NORMALES 40
#define PRECIO_HORA_EXTRA_NORMAL 1.5
#define PRECIO_HORA_EXTRA_DOBLE 2.0

int main() {
    float horas_trabajadas, precio_por_hora, salario_semanal;

    // Solicitar al usuario las horas trabajadas y el precio por hora
    printf("Ingrese las horas trabajadas esta semana: ");
    scanf("%f", &horas_trabajadas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precio_por_hora);

    // Calcular salario semanal
    if (horas_trabajadas <= HORAS_NORMALES) {
        salario_semanal = horas_trabajadas * precio_por_hora;
    } else if (horas_trabajadas > HORAS_NORMALES && horas_trabajadas <= 50) {
        salario_semanal = (HORAS_NORMALES * precio_por_hora) + 
                          ((horas_trabajadas - HORAS_NORMALES) * precio_por_hora * PRECIO_HORA_EXTRA_NORMAL);
    } else {
        salario_semanal = (HORAS_NORMALES * precio_por_hora) + 
                          (10 * precio_por_hora * PRECIO_HORA_EXTRA_NORMAL) +
                          ((horas_trabajadas - 50) * precio_por_hora * PRECIO_HORA_EXTRA_DOBLE);
    }

    // Mostrar salario semanal
    printf("El salario semanal es: %.2f\n", salario_semanal);
    //comentario prueba para

    return 0;
    
}