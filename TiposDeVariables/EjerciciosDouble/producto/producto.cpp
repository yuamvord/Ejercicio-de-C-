#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double precioProducto;
    double cantidadComprada;

    cout << "Ingrese el precio de su producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidadComprada;

    double totalPagar = precioProducto * cantidadComprada;

    cout << "El total a pagar por el producto es: " << fixed << setprecision(2) << totalPagar << "Qtz";

    return 0;
}