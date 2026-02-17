#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    string nombre;
    string apellido;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;

    cout << "Su nombre completo es " << nombre << " " << apellido;

    return 0;
}