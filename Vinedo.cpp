#include "Vinedo.h"
#include <iostream>



//Constructor
Vinedo::Vinedo(int codigo, std::string nombreVino, std::string nombreMarca,
                 int dia, int mes, int anio,
                 int mesIngreso, int anioIngreso,
                 std::string tipoVino,
                 float precioSinImpuesto,
                 std::string nombreProveedor, int telefonoProveedor, int dniProveedor) {
    v_codigo = codigo;
    v_nombreVino = nombreVino;
    v_nombreMarca = nombreMarca;
    v_dia = dia;
    v_mes = mes;
    v_anio = anio;
    v_mesIngreso = mesIngreso;
    v_anioIngreso = anioIngreso;
    v_tipoVino = tipoVino;
    v_precioSinImpuesto = precioSinImpuesto;
    v_nombreProveedor = nombreProveedor;
    v_telefonoProveedor = telefonoProveedor;
    v_dniProveedor = dniProveedor;

}

//Getters
int Vinedo::getCodigo() {return v_codigo;}
std::string Vinedo::getNombreVino() {return v_nombreVino;}
int Vinedo::getDniProveedor() {return v_dniProveedor;}

//Setters
int Vinedo::setMes(int mes) {
    v_mes = mes;
    return v_mes;
}
int Vinedo::setAnio(int anio) {
    v_anio = anio;
    return v_anio;
}
float Vinedo::setPrecioSinImpuesto(float precioSinImpuesto) {
    v_precioSinImpuesto = precioSinImpuesto;
    return v_precioSinImpuesto;
}

//Metodos
float Vinedo::calcularPrecioPublico() {
    v_precioVentaPublico = v_precioSinImpuesto * 1.15;
    return v_precioVentaPublico;
}

void Vinedo::mostrar() {
    std::cout << "Codigo: " << v_codigo << std::endl;
    std::cout << "Nombre del vino: " << v_nombreVino << std::endl;
    std::cout << "Nombre de la marca: " << v_nombreMarca << std::endl;
    std::cout << "Fecha de fabricacion: " << v_dia << "/" << v_mes << "/" << v_anio << std::endl;
    std::cout << "Fecha de ingreso al supermercado: " << v_mesIngreso << "/" << v_anioIngreso << std::endl;
    std::cout << "Tipo de vino: " << v_tipoVino << std::endl;
    std::cout << "Precio sin impuesto: " << v_precioSinImpuesto << std::endl;
    std::cout << "Nombre del proveedor: " << v_nombreProveedor << std::endl;
    std::cout << "Telefono del proveedor: " << v_telefonoProveedor << std::endl;
    std::cout << "DNI del proveedor: " << v_dniProveedor << std::endl;
}

void Vinedo::mostrarFinal() {
    std::cout << "Codigo: " << v_codigo << std::endl;
    std::cout << "Nombre del vino: " << v_nombreVino << std::endl;
    std::cout << "Nombre de la marca: " << v_nombreMarca << std::endl;
    std::cout << "Fecha de fabricacion: " << v_dia << "/" << v_mes << "/" << v_anio << std::endl;
    std::cout << "Fecha de ingreso al supermercado: " << v_mesIngreso << "/" << v_anioIngreso << std::endl;
    std::cout << "Tipo de vino: " << v_tipoVino << std::endl;
    std::cout << "Precio de venta al publico: " << calcularPrecioPublico() << std::endl;
    std::cout << "Nombre del proveedor: " << v_nombreProveedor << std::endl;
    std::cout << "Telefono del proveedor: " << v_telefonoProveedor << std::endl;
    std::cout << "DNI del proveedor: " << v_dniProveedor << std::endl;
}

std::string Vinedo::obtenerInformacion() const {
    std::string informacion;

    informacion += "Código: " + std::to_string(v_codigo) + "\n";
    informacion += "Nombre del vino: " + v_nombreVino + "\n";
    informacion += "Nombre de la marca: " + v_nombreMarca + "\n";
    informacion += "Fecha de fabricación: " + std::to_string(v_dia) + "/" + std::to_string(v_mes) + "/" + std::to_string(v_anio) + "\n";
    informacion += "Fecha de ingreso al supermercado: " + std::to_string(v_mesIngreso) + "/" + std::to_string(v_anioIngreso) + "\n";
    informacion += "Tipo de vino: " + v_tipoVino + "\n";
    informacion += "Precio sin impuesto: " + std::to_string(v_precioSinImpuesto) + "\n";

    return informacion;
}

std::string Vinedo::obtenerProveedor() const {
    std::string informacion;

    informacion += "Nombre: " + v_nombreProveedor + "\n";
    informacion += "Teléfono: " + std::to_string(v_telefonoProveedor) + "\n";
    informacion += "DNI: " + std::to_string(v_dniProveedor) + "\n";

    return informacion;
}

