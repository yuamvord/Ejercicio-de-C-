#include <iostream>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int claveAcceso = 4 * 3 * 13417;
    int solicitarClave;
    const std::string fraseSeguridad = "A través del ventanal";
    std::string solicitarFrase;


    for (int i = 1; i <= 3; i++){
        std::cout << "--------ACCESO NO AUTORIZADO--------" << std::endl;
        std::cout << "Clave de Acceso: ";
        std::cin >> solicitarClave;
        std::cin.ignore();
        std::cout << "Frase de Seguridad: ";
        std::getline(std::cin, solicitarFrase);

        if(solicitarClave == claveAcceso && solicitarFrase == fraseSeguridad){
            std::cout << "[SISTEMA]: Acceso Concedido. Bienvenido Agente." << std::endl;
            break;
        }
        else if((solicitarClave == claveAcceso && solicitarFrase != fraseSeguridad) || (solicitarClave != claveAcceso && solicitarFrase == fraseSeguridad)){
            std::cout << "[ERROR]: Credenciales Parciales. Alerta Enviada." << std::endl << std::endl;
        }
        else{
            std::cout << "[PELIGRO]: Intruso Detectado." << std::endl << std::endl;
        }

        if(i == 3){
            std::cout << "SISTEMA BLOQUEADO";
            break;
        }
    }

    return 0;
}