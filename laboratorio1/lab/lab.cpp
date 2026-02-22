#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string nombreCompleto;
    float precioProducto, subtotal, ivaPagar, totalPagar;
    int cantidadComprada;
    float iva = 0.12;

    cout << "Ingrese su nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "Ingrese el precio del producto seleccionado: ";
    cin >> precioProducto;
    cout << "Ingrese la cantidad comprada del producto: ";
    cin >> cantidadComprada;

    subtotal = precioProducto * cantidadComprada;
    ivaPagar = subtotal * iva;
    totalPagar = subtotal + ivaPagar;

    cout << fixed << setprecision(2);
    cout << "El subtotal es: " << subtotal << endl;
    cout << fixed << setprecision(2);
    cout << "El iva a pagar es; " << ivaPagar << endl;
    cout << fixed << setprecision(2);
    cout << "El total a pagar por el producto es: " << totalPagar;

    return 0;
}