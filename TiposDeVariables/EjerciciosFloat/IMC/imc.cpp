#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float estaturaM;
    float pesoKg;

    cout << "Ingrese su estatura en metros: ";
    cin >> estaturaM;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> pesoKg;

    float Imc = pesoKg / (estaturaM * estaturaM);   

    cout << "Su IMC es de: " << fixed << setprecision(2) << Imc;
    
    return 0;
}