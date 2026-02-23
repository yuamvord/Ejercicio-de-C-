#include <iostream>
#include <windows.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int puertos[5] = {80, 443, 22, 3389, 8080};
    int cantidadAlertas = 0;

    for (int puerto : puertos){
        if(puerto == 22 || puerto == 3389){
            std::cout << "[ALERTA]: Puerto " << puerto << " detectado (posible acceso remoto)." << std::endl << std::endl;
            cantidadAlertas++;
        }
        else if(puerto == 80){
            std::cout << "[INFO]: Puerto " << puerto << " detectado ( HTTP - Inseguro )." << std::endl << std::endl;
        }
        else{
            std::cout << "[OK]: Puerto " << puerto << " bajo monitoreo." << std::endl << std::endl;
        }
    }

    std::cout << "Se encontraron un total de " << cantidadAlertas << " alertas." << std::endl << std::endl;

    return 0;
}