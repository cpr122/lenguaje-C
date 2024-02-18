#include <stdio.h>
#include <stdlib.h>

int main (){
    printf("Bienvenido Usuario\nAverigua tu tiempo de vida\n");
int a;
printf("Ingresa tu edad:");
scanf("%i",&a);
printf("tu edad es: %i",a);
int m = a*365*24*60*60;
printf(" tu tiempo de vida es de: %i",m);
}

