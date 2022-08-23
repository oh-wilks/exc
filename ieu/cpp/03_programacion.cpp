#include <iostream>
using namespace std;

int main() {
    
/*
  Programa 1:

Desarrolla un programa que le pida al usuario ingresar dos números; 
una vez que el usuario proporcione ambos números, el programa deberá
mostrar un “menú” con las siguientes opciones:

Suma
Resta
Multiplicación
División
En la pantalla deberá aparecer el mensaje “ingresa el número de la opción deseada”. 
En el código del programa deberás escribir cuatro funciones por separado, una para cada operación,
 y ocupar la función que corresponda a la opción seleccionada.

Tip: Utiliza la instrucción switch-case. 
*/
    char oper;
    float num1, num2;
    cout << "Ingresa la operacion deseada (+, -, *, /): ";
    cin >> oper;
    cout << "Ingresa dos numeros: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // si el operador no coincide con la entrada del usuario
            cout << "Operador Incorrecto";
            break;
    }


/*
Programa 2:

Escribe un programa que solicite al usuario dos números 
enteros (que entran como datos), indique si segundo número
 es divisor del otro; para el caso de que el segundo número 
 sea mayor que el primero, el programa también lo deberá reportar.
*/
   
    int num3, num4;
    float divis;
    cout << "Ingresa dos numeros enteros: " << endl;
    cin >> num3 >> num4;
    float num3f = (float)num3; 
    float num4f = (float)num4; // conversion de int a float para mostrar en pantalla el segundo resultado
    divis = num3f/num4f;

    if (num3%num4==0) // modulo para conocer residuo
        {
           cout << "El numero: " << num4 << " es divisor de " << num3 << endl<<endl;
           cout << num3 << " / " << num4 << " = " << num1/num2 <<endl; 
        }
      
      else if (num4>num3)
    {
      cout << "Numero 2 es mayor que Numero 1" << endl;
      cout << "El numero: " << num4 << ", NO es divisor de " << num3 << endl<<endl;
           cout << num3 << " / " << num4 << " = " << divis <<endl; 
    }

    return 0;
}

