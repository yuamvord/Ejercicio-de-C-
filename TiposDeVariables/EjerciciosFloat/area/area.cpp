#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float base;
    float altura;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    float area = (base * altura) / 2;

    cout << "El área del triangulo es: " << fixed << setprecision(2) << area;

    return 0;
}