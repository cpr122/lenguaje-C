#include <stdio.h>

int main() {
    int golesEquipoA, golesEquipoB;

    printf("Ingrese la cantidad de goles que hizo el Equipo A: ");
    scanf("%d", &golesEquipoA);

    printf("Ingrese la cantidad de goles que hizo el Equipo B: ");
    scanf("%d", &golesEquipoB);

    if (golesEquipoA > golesEquipoB) {
        printf("El Equipo A gano con %d goles", golesEquipoA);
    } else if (golesEquipoB > golesEquipoA) {
        printf("El Equipo B gano con %d goles", golesEquipoB);
    } else {
        printf("El partido termino en empate");
    }
    return 0;
}
