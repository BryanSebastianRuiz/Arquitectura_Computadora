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

    // Busca las palabras en el archivo de c�digo
    string line;
    for (int i = 0; i < sizeof(palabras) / sizeof(palabras[0]); i++) {
    string palabra = palabras[i];
    // Resto del c�digo dentro del bucle
        inputFile.clear();
        inputFile.seekg(0, ios::beg); // Reinicia el cursor al principio del archivo
        
        while (getline(inputFile, line)) {
            // Verifica si la l�nea contiene la palabra actual
            if (line.find(palabra) != string::npos) {
                cout << "Palabra encontrada: " << palabra << endl;
                break;
            }
        }
    }

    // Cierra el archivo
    inputFile.close();

    return 0;
}

