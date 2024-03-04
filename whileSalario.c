#include <stdio.h>
#include <stdlib.h>

int main (){
    printf("Bienvenido Usuario\nAverigua tu salario\n");
int a;
int sueldo;
printf("ingresa horas trabajadas");
scanf("%i",&a);
printf("precio por hora");
scanf(" %i",&sueldo);

if (a<=40)
{
    float salario=(a*40);
    printf("tu sueldo es de: %f",salario);
}else{
    float salario= (40*sueldo+(sueldo*1.5*(a-40)));
    printf("tu sueldo es de:%f",salario);
}

}
