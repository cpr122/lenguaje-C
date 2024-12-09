#include <stdio.h>
#include <weather.h>
int main() {
    // Inicializar la librería
    weather_init(NULL);

    // Establecer la ubicación para obtener el clima
    weather_set_location("Mexico City", NULL);

    // Obtener el clima actual
    Weather *weather = weather_get_current();

    // Imprimir la información del clima
    printf("Condiciones climáticas actuales en %s:\n", weather_get_location());
    printf("Tiempo: %s\n", weather_get_description());
    printf("Temperatura: %.1f°C\n", weather_get_temperature());
    printf("Humedad: %d%%\n", weather_get_humidity());
    printf("Viento: %.1f km/h\n", weather_get_wind_speed());

    // Liberar recursos
    weather_free();

    return 0;
}
```
