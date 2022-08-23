#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

/*
Programa 1:
Dadas tres variables enteras a, b y c, las cuales contienen 
los valores 6, 8 y 9 (inicializa las variables con esos valores),
calcula el promedio de las tres variables y almacena el resultado 
en una variable llamada promedio.Posteriormente, manda a imprimir
a la pantalla los siguientes dos mensajes por separado:
El promedio es:
7.66 
*/

float a = 6, b = 8, c = 9;
float promedio = 0;
promedio = (a+b+c)/3;

    printf("--- Primer Programa --- \n\n");
    printf("El promedio es:\n");
    printf("%f", promedio);
    printf("\n\n");

/*
Programa 2:
Escribe un programa que declare la constante PI con la 
directiva #define y almacene en ella el valor de 3.1416.
Posteriormente, declara una variable llamada radio con el 
valor de 5. Calcula el diámetro y el área de una circunferencia 
en donde se utilice la variable radio y la constant PI, manda a 
la pantalla los mensajes correspondientes de los resultados. 
Los mensajes deberán aparecer de la siguiente forma:
El perímetro es
31.416
El área es
78.54
*/

int radio = 5;
#define PI 3.1416
float area = 0, perimetro = 0;

area = PI * radio * radio ;
perimetro = 2 * radio * PI;
    printf("--- Segundo Programa --- \n\n");
    printf("El perimetro es:\n");
    printf("%f", perimetro);
    printf("\n");
    printf("El area es:\n");
    printf("%f", area);
return 0;

}