#include <iostream>
using namespace std;

int main(){

    int num1;
    int num2;

    cout << "Ingrese el primer numero a operar: ";
    cin >> num1;

    cout << "Ingrese el segundo numero a operar: ";
    cin >> num2;

    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;

    cout << "La suma de los numeros ingresados es: " << suma << endl;
    cout << "La resta de los numeros ingresados es: " << resta << endl;
    cout << "La multiplicacion de los numeros ingresados es: " << multiplicacion << endl;

    return 0;

};