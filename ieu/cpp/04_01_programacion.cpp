#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

/* Programa 1:

Escriba un programa para calcular la media y la desviación estándar
de un conjunto de n números reales, en donde n<20. El usuario deberá
proporcionar el número de datos n a ingresar. El programa deberá leer
los n números reales del teclado.
Use un arreglo de tamaño 20 para almacenar los n números proporcionados.
Al finalizar, el programa deberá reportar en pantalla la media y las desviación estándar de los datos ingresados.
*/


int main() {
{
int a[20],n,i; //arreglo a
float suma = 0, prom = 0, sd1 = 0, sdp = 0, sdm;
cout<<"\nNumero de Elementos: ";
cin>>n; 
if (n < 20) // si n > 20, fin de programa

{
for(i=1;i<=n;i++)
   {
      cout<<"Elemento "<< i << ": ";
      cin >> a[i];
      suma += a[i];
      prom = suma/n;
    }
for (i = 1; i<=n; i++)
  {
      sd1 += pow((a[i]-prom),2); //sumatoria (x-mu)^2
  }
sdp = sqrt(sd1/(n));
sdm = sqrt(sd1/(n-1));
    
//printf("\nSuma : %f",suma);
printf("\nMedia : %f",prom);
printf("\nDesviacion Estandar Poblacion : %f",sdp);
printf("\nDesviacion Estandar Muestra : %f",sdm);
  }
  else {
printf("\nNumero mayor de 20, fin del programa");

  }
    return 0;
}
  
}