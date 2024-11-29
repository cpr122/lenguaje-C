
#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUCTOS 100

typedef struct {
    char nombre[50];
    float precio;
} Producto;

void agregarProducto(Producto *productos, int *cantidad) {
    if (*cantidad >= MAX_PRODUCTOS) {
        printf("No se pueden agregar más productos.\n");
        return;
    }

    printf("Ingrese el nombre del producto: ");
    scanf("%s", productos[*cantidad].nombre);
    
    printf("Ingrese el precio del producto: ");
    scanf("%f", &productos[*cantidad].precio);
    
    (*cantidad)++;
}

void mostrarProductos(Producto *productos, int cantidad) {
    printf("\nProductos en la tienda:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d. %s - $%.2f\n", i + 1, productos[i].nombre, productos[i].precio);
    }
}

float calcularTotal(Producto *productos, int cantidad) {
    float total = 0.0;
    for (int i = 0; i < cantidad; i++) {
        total += productos[i].precio;
    }
    return total;
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int cantidad = 0;
    int opcion;

    do {
        printf("\nMenu:\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar productos\n");
        printf("3. Calcular total\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarProducto(productos, &cantidad);
                break;
            case 2:
                mostrarProductos(productos, cantidad);
                break;
            case 3:
                printf("El total de la compra es: $%.2f\n", calcularTotal(productos, cantidad));
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}
