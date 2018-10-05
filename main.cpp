#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

//Wilmer Mata Camacho

using namespace std;

int main(int argc, char** argv) {
    int menu;
    cout << "\t\t\tElija la base en la que esta el numero a convertir: \n";
    cout << "1. Binario\n";
    cout << "2. Octal\n";
    cout << "3. Hexadecimal\n";
    cin>>menu;
    
    string numero = "";
    int resultado;
    int tamano;
    int numeroDecimal = 0;
    int resultadoTemporal;
    
    switch (menu) {
        case 1:

            cout << "\t\t\tIngrese un numero binario: \n";
            cin >> numero;
            tamano = numero.length();
            for (int i = 0; i < numero.length(); i++) {
                tamano = tamano - 1;
                string numeroTemporal = string(1, numero.at(tamano));
                cout << numeroTemporal;
                resultadoTemporal = atoi(numeroTemporal.c_str());
                resultado = resultadoTemporal * pow(2, i);
                numeroDecimal = numeroDecimal + (resultado);
                cout << " Base 2 , " << i << " = " << resultado << "\n";
            }
            cout << "\t\t\tNumero decimal: ";
            cout << numeroDecimal;

            break;

        case 2:

            cout << "\n\t\t\tIngrese un numero octal: \n";
            cin >> numero;
            tamano = numero.length();
            for (int i = 0; i < numero.length(); i++) {
                tamano = tamano - 1;
                string numeroTemporal = string(1, numero.at(tamano));
                cout << numeroTemporal;
                resultadoTemporal = atoi(numeroTemporal.c_str());
                resultado = resultadoTemporal * pow(8, i);
                numeroDecimal = numeroDecimal + (resultado);
                cout << " Base 8 , " << i << " = " << resultado << "\n";
            }
            cout << "\nNumero decimal: ";
            cout << numeroDecimal;

            break;

        case 3:

            cout << "\n\t\t\tIngrese un numero hexadecimal: \n";
            cin >> numero;
            tamano = numero.length();
            for (int i = 0; i < numero.length(); i++) {
                tamano = tamano - 1;
                char tempNum = numero.at(tamano);
                string numeroTemporal = string(1, numero.at(tamano));
                cout << numeroTemporal;
                if (numeroTemporal == "a" || numeroTemporal == "A") {
                    resultadoTemporal = 10;
                } else if (numeroTemporal == "b" || numeroTemporal == "B") {
                    resultadoTemporal= 11;
                } else if (numeroTemporal == "c" || numeroTemporal == "C") {
                    resultadoTemporal = 12;
                } else if (numeroTemporal == "d" || numeroTemporal == "D") {
                   resultadoTemporal = 13;
                } else if (numeroTemporal == "e" || numeroTemporal == "E") {
                    resultadoTemporal = 14;
                } else if (numeroTemporal == "f" || numeroTemporal == "F") {
                    resultadoTemporal = 15;
                } else {
                    resultadoTemporal = atoi(numeroTemporal.c_str());
                }
                resultado = resultadoTemporal * pow(16, i);
                numeroDecimal = numeroDecimal + (resultado);
                cout << " Base 16 , " << i << " = " << resultado << "\n";
            }
            cout << "\nNumero decimal: ";
            cout << numeroDecimal;

            break;
        default:
            cout << "El valor ingresado no corresponde a una opcion del menu";
            break;
    }
    cin.ignore();

    return 0;
}

