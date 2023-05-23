#include "generarTXT.h"
#include <iostream>
#include <fstream>

void generarArchivoTxt(const std::string& nombreArchivo, const std::string& contenido) {
    std::string directorio = "Archivos/";
    std::string completa = directorio + nombreArchivo;

    std::ofstream archivo(completa);
    if (archivo.is_open()) {
        archivo << contenido;
        archivo.close();
        std::cout << "Archivo " << nombreArchivo << " generado correctamente en "<< completa << "." <<std::endl;
    } else {
        std::cout << "No se pudo generar el archivo " << nombreArchivo << "." << std::endl;
    }
}