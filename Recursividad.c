#include <stdio.h>

int main() {
    int numero = 10; // Variable entera
    int *apuntador; // Declaración de un apuntador a entero

    apuntador = &numero; // Asignación de la dirección de memoria de 'numero' a 'apuntador'

    printf("Valor de 'numero': %d\n", numero);
    printf("Dirección de memoria de 'numero': %p\n", &numero);
    printf("Valor de 'apuntador': %p\n", apuntador);
    printf("Valor apuntado por 'apuntador': %d\n", *apuntador);
    // Modificando el valor de 'numero' a través del apuntador
    *apuntador = 20;

    printf("Valor de 'numero' después de modificarlo a través del apuntador(espacio en memoria): %d\n", numero);
    return 0;
}
