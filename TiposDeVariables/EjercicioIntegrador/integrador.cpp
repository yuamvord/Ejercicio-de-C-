#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string nombre;
    int edad;
    float altura;
    double precioProducto;
    char inicialApellido;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;
    cout << "Ingrese la inicial de su apellido: ";
    cin >> inicialApellido;

    cout << "Los datos ingresados son: " << endl << 
    "Nombre: " << nombre << endl <<
    "Edad: " << edad << endl << 
    "Altura: " << altura << endl <<
    "Precio del Producto: " << fixed << setprecision(2) << precioProducto << endl <<
    "Inicial del Apellido: " << inicialApellido;
}