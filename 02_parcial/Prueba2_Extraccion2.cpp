#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abre el archivo de c�digo C++ para leerlo
    ifstream inputFile("C:/Users/sebas/Documents/Estructura_de_computadoras/Arquitectura_Computadora/02_parcial/Pueba1_Validacion.cpp");

    // Verifica si el archivo se abri� correctamente
    if (!inputFile.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // Crea un archivo de texto para escribir el c�digo
    ofstream outputFile("codigoprueba.txt");

    // Verifica si se pudo crear el archivo de texto
    if (!outputFile.is_open()) {
        cout << "Error al crear el archivo de texto" << endl;
        return 1;
    }

    // Lee l�nea por l�nea del archivo de c�digo y escribe en el archivo de texto
    string line;
    while (getline(inputFile, line)) {
        // Verifica si la l�nea contiene la palabra "STOP"
        if (line == "benito") {
            cout << "Se encontro la palabra correcta" << endl;
            break;
        }
        outputFile << line << endl;
    }

    // Cierra los archivos
    inputFile.close();
    outputFile.close();

    cout << "Codigo copiado exitosamente al archivo de texto." << endl;

    return 0;
}

