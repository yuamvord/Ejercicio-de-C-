#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Edad;

    cout << "Ingrese su edad: ";
    cin >> Edad;

    int EdadFutura = Edad + 5;

    cout << "En 5 años tendra " << EdadFutura << " años";
    
    return 0;
}