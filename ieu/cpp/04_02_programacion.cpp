#include <iostream>
using namespace std;

/*
 Programa 2:

Sea A una matriz de tamaño mxn, en donde m<10 y n<10.  
Implemente un programa que solicite al usuario los datos m y n, 
después le pida cada uno de los valores Aij de la matriz A; 
finalmente calcule la transpuesta de A y la reporte en la pantalla
de forma ordenada:
*/

int main() {
   int a[10][10], at[10][10], fila, columna, i, j;

   cout << "Ingrese numero de filas: ";
   cin >> fila;
   cout << "Ingrese numero de columnas: ";
   cin >> columna;
   
   cout << "\nIngrese los elementos de la matriz de acuerdo a la siguiente matriz ejemplo: ";
  for (int i = 0; i < 3; ++i)
   {
  std::cout << "\n";
}
// matriz ejemplo
   for (int i = 0; i < fila; ++i) {
      for (int j = 0; j < columna; ++j) {
         cout  <<i + 1 << "." << j + 1 << " ";
         if (j == columna - 1)
            cout << endl;
      }
   }
   
   for (int i = 0; i < 1; ++i)
   {
  std::cout << "\n";
}
   // almacenar datos de la matriz
   for (int i = 0; i < fila; ++i) {
      for (int j = 0; j < columna; ++j) {
         cout << "Ingrese elemento " << i + 1 << "." << j + 1 << ": ";
         cin >> a[i][j];
      }
   }
    for (int i = 0; i < 2; ++i)
   {
  std::cout << "\n";
}

   // Impresion de la matriz
   cout << "\nMatriz Ingresada: " << endl;
   for (int i = 0; i < fila; ++i) {
      for (int j = 0; j < columna; ++j) {
         cout << " " << a[i][j] << "";
         if (j == columna - 1)
            cout << endl;
      }
   }

   // Calculo de la matriz transpuesta
   for (int i = 0; i < fila; ++i)
      for (int j = 0; j < columna; ++j) {
         at[j][i] = a[i][j];
      }

   // Impresion de la matriz transpuesta
   cout << "\nMatriz Transpuesta: " << endl;
   for (int i = 0; i < columna; ++i)
      for (int j = 0; j < fila; ++j) {
         cout << " " << at[i][j];
         if (j == fila - 1)
            cout << endl;
      }

   return 0;
}