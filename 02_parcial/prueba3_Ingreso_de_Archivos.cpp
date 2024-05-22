#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void createFolder(const std::string& path) {
    if (!fs::exists(path)) {
        fs::create_directory(path);
        std::cout << "Carpeta creada correctamente en " << path << std::endl;
    } else {
        std::cout << "La carpeta ya existe en " << path << std::endl;
    }
}

void createFile(const std::string& path, const std::string& content) {
    std::ofstream file(path);
    if (file.is_open()) {
        file << content;
        file.close();
        std::cout << "Archivo creado correctamente en " << path << std::endl;
    } else {
        std::cout << "Error al crear el archivo en " << path << std::endl;
    }
}

void editFile(const std::string& path) {
    std::ofstream file(path, std::ios::app);
    if (file.is_open()) {
        std::string content;
        std::cout << "Ingrese el texto a agregar al archivo (Escriba 'fin' para terminar):\n";
        while (true) {
            std::getline(std::cin, content);
            if (content == "fin") break;
            file << content << std::endl;
        }
        file.close();
        std::cout << "Archivo editado correctamente en " << path << std::endl;
    } else {
        std::cout << "Error al editar el archivo en " << path << std::endl;
    }
}

void deleteFile(const std::string& path) {
    if (fs::remove(path)) {
        std::cout << "Archivo eliminado correctamente en " << path << std::endl;
    } else {
        std::cout << "Error al eliminar el archivo en " << path << std::endl;
    }
}

void createProgram(const std::string& path) {
    std::ofstream file(path + ".cpp");
    if (file.is_open()) {
        file << "#include <iostream>\n\nint main() {\n    std::cout << \"Hola Mundo\" << std::endl;\n    return 0;\n}\n";
        file.close();
        std::cout << "Programa creado correctamente en " << path + ".cpp" << std::endl;
    } else {
        std::cout << "Error al crear el programa en " << path + ".cpp" << std::endl;
    }
}

int main() {
    while (true) {
        std::cout << "\nMENU\n";
        std::cout << "1. Crear carpeta\n";
        std::cout << "2. Crear archivo\n";
        std::cout << "3. Editar archivo\n";
        std::cout << "4. Eliminar archivo\n";
        std::cout << "5. Crear programa\n";
        std::cout << "6. Salir\n";
        std::cout << "Seleccione una opción: ";

        int option;
        std::cin >> option;
        std::cin.ignore();  // Limpiar el buffer del teclado

        std::string path, content;

        switch (option) {
            case 1:
                std::cout << "Ingrese la ruta completa para la carpeta: ";
                std::getline(std::cin, path);
                createFolder(path);
                break;
            case 2:
                std::cout << "Ingrese la ruta completa para el archivo: ";
                std::getline(std::cin, path);
                std::cout << "Ingrese el contenido del archivo:\n";
                std::getline(std::cin, content);
                createFile(path, content);
                break;
            case 3:
                std::cout << "Ingrese la ruta completa para el archivo a editar: ";
                std::getline(std::cin, path);
                editFile(path);
                break;
            case 4:
                std::cout << "Ingrese la ruta completa para el archivo a eliminar: ";
                std::getline(std::cin, path);
                deleteFile(path);
                break;
            case 5:
                std::cout << "Ingrese la ruta completa para el programa (sin la extensión .cpp): ";
                std::getline(std::cin, path);
                createProgram(path);
                break;
            case 6:
                std::cout << "Saliendo del programa...\n";
                return 0;
            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
        }
    }

    return 0;
}
