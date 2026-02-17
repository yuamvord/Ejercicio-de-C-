#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string nombreUsuario;

    cout << "Ingrese su nombre de usuario: ";
    cin >> nombreUsuario;

    cout << "¡Bienvenido " << nombreUsuario << "!";

    return 0;
}