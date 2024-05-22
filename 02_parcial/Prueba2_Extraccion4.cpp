#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abre el archivo de c�digo C++ para leerlo
    ifstream inputFile("C:/Users/sebas/Documents/Estructura_de_computadoras/Arquitectura_Computadora/02_parcial/Pueba1_Validacion.cpp");

    // Verifica si el archivo se abri� correctamente
    if (!inputFile.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    // Declara un diccionario de palabras
    string palabras[] = {"palabra1", "palabra2", "beni", "palabra4"}; // Agrega m�s palabras seg�n necesites

    bool palabraEncontrada = false;

    // Busca las palabras en el archivo de c�digo
string line;
while (getline(inputFile, line)) {
    bool encontradaEnLinea = false;
    for (int i = 0; i < sizeof(palabras) / sizeof(palabras[0]); i++) {
        if (line.find(palabras[i]) != string::npos) {
            cout << "Palabra encontrada: " << line << endl;
            encontradaEnLinea = true;
            palabraEncontrada = true;
            break;
        }
    }
    if (encontradaEnLinea) {
        break; // Sale del bucle mientras si encontr� la palabra en esta l�nea
    }
}

    // Muestra un mensaje si la palabra no fue encontrada
    if (!palabraEncontrada) {
        cout << "Palabra no encontrada." << endl;
    }

    // Cierra el archivo
    inputFile.close();

    return 0;
}

