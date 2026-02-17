#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double montoInicial;
    double porcentajeIncremento;

    cout << "Ingrese un monto inicial: ";
    cin >> montoInicial;

    cout << "Ingrese un porcentaje de incremento sin el signo %: ";
    cin >> porcentajeIncremento;

    double incrementoRealizado = montoInicial + (montoInicial * porcentajeIncremento / 100);

    cout << "El nuevo monto es: " << incrementoRealizado;

    return 0;
}