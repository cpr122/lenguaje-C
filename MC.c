
#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicitar el peso
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    // Solicitar la altura
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    // Calcular el IMC
    imc = peso / (altura * altura);

    // Mostrar el resultado
    printf("Su índice de masa corporal (IMC) es: %.2f\n", imc);

    // Clasificación del IMC
    if (imc < 18.5) {
        printf("Clasificación: Bajo peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Clasificación: Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Clasificación: Sobrepeso\n");
    } else {
        printf("Clasificación: Obesidad\n");
    }

    return 0;
}
