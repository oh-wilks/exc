#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char*argv[]) {
   
/*
 Programa 1:
Diseñe, escriba y ejecute un programa que, dado un número real que entra 
como dato, nos indique si está contenido dentro de los límites
predeterminados. El límite inferior es de 100 y el superior de 200. 
Los posibles mensajes de salida del programa son:

a)    “El número está por debajo del límite inferior”
b)    “El número está por encima del límite superior”
c)    “El número está dentro de los límites”
*/

float numero = 0;
printf("--- Programa 1 ---\n\n");
printf("Cual es el numero a comparar?\n");
scanf("%f",&numero);

if (numero < 100) {
  printf("r. El numero esta por debajo del limite inferior");
} else if (numero > 200) {
  printf("r. El limite esta por encima del limite superior");
} else {
  printf("r. El numero esta entre los limites");
}


/*
Escriba un programa que reciba cinco calificaciones de un estudiante y calcule el promedio y la máxima y la mínima calificación. Deberá imprimir en pantalla los resultados en cualquier orden y formato.

Restricciones: Debe utilizar estructuras selectivas e iterativas (for o while o do-while).
*/


printf("\n\n");
printf("--- Programa 2 ---\n\n");

bool nulo = true;
    int cont = 0;
    char opcion;
    float prom, max, min, sum;

do
 {
  printf( "Ingresa un numero: ");
  float num;
   cin >> num;
    cont++;
       if (nulo)
        {
            nulo = false;
            min = num;
            max = num;
        }
        else if (max < num)
        {
          max = num; // reemplaza el valor maximo
        }
        else if (num < min)
        {
          min = num; // reemplaza el valor minimo
        }
        sum = sum + num; // suma
        prom = sum / cont; // promedio
        printf("Deseas ingresar otro numero? \n\n si (s), no (n)\n\n");
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    
    if (!nulo)
    {
    printf("---Resultados---\n\nNumero mayor: ");
    printf("%f\n", max);
    cout << "Numero menor: " << min << endl;
    cout << "Suma: " << sum << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Total de Numeros: " << cont<<endl;
    }
    return 0;

}