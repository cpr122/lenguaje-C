
#include <stdio.h>

// Función para calcular el factorial de un número utilizando recursividad
int factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: el factorial de 0 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    printf("El factorial de %d es: %d\n", numero, factorial(numero));
    return 0;
}
