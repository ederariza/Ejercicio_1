/*
Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2
 */

#include <iostream>

using namespace std;

int main(){

    int A, B, C;
    cout<< "Ingrese el numero A: ";
    cin>> A;
    cout<< "Ingrese el numero B: ";
    cin>> B;
    C = A % B;
    cout << "El residuo de la division " << A << "/" << B << " es "<< C << endl;
    return 0;

}
