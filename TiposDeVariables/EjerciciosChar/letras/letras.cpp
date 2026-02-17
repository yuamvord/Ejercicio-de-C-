#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char letra;

    cout << "Ingrese cualquier letra del alfabeto: ";
    cin >> letra;

    cout << "La letra ingresada es: " << letra << endl;
    cout << letra << letra << letra << endl;
    cout << "La letra que se ingreso representa el número " << int(letra);

    return 0;
}