#include <stdio.h>
#include <math.h>

int main()
{
    // Declarar las variables para los coeficientes y las raíces
    double a, b, c, x1, x2;

    // Pedir al usuario que ingrese los valores de a, b y c
    printf("Ingrese el valor de a: ");
    scanf("%lf", &a);

    printf("Ingrese el valor de b: ");
    scanf("%lf", &b);

    printf("Ingrese el valor de c: ");
    scanf("%lf", &c);

    // Calcular el discriminante
    double d = b * b - 4 * a * c;

    // Verificar si el discriminante es positivo, negativo o cero
    if (d > 0)
    {
        // Hay dos raíces reales y distintas
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        // Mostrar el resultado
        printf("Las raíces de la ecuación son: %.2f y %.2f\n", x1, x2);
    }
    else if (d == 0)
    {
        // Hay una raíz real y doble
        x1 = -b / (2 * a);

        // Mostrar el resultado
        printf("La raíz de la ecuación es: %.2f\n", x1);
    }
    else
    {
        // Hay dos raíces complejas y conjugadas
        x1 = -b / (2 * a);
        x2 = sqrt(-d) / (2 * a);

        // Mostrar el resultado
        printf("Las raíces de la ecuación son: %.2f + %.2fi y %.2f - %.2fi\n", x1, x2, x1, x2);
    }

    return 0;
}
