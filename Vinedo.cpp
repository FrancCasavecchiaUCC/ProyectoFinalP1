#include "Vinedo.h"
#include <iostream>


//TODO:
//Agregrar productos al sistema
//Eliminar productos del sistema
//Busqueda por nombre de vino y devolver toda la info dl vino seleccionado
//Modificar precio del vino a traves del codigo de vino
//Modificar fecha de ingreso al supermercado de un determinado vino por codigo
//Imprimir productos -- genera un archivo. txt con la información del producto (código)
//Muestra total de porductos y el total de sus precios de venta al publico

Vinedo::Vinedo(int codigo, std::string nombreVino, std::string nombreMarca,
                 int dia, int mes, int anio,
                 int mesIngreso, int anioIngreso,
                 char tipoVino,
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
std::string Vinedo::getNombreMarca() {return v_nombreMarca;}
int Vinedo::getDia() {return v_dia;}
int Vinedo::getMes() {return v_mes;}
int Vinedo::getAnio() {return v_anio;}
int Vinedo::getMesIngreso() {return v_mesIngreso;}
int Vinedo::getAnioIngreso() {return v_anioIngreso;}
char Vinedo::getTipoVino() {return v_tipoVino;}
float Vinedo::getPrecioSinImpuesto() {return v_precioSinImpuesto;}
std::string Vinedo::getNombreProveedor() {return v_nombreProveedor;}
int Vinedo::getTelefonoProveedor() {return v_telefonoProveedor;}
int Vinedo::getDniProveedor() {return v_dniProveedor;}


//Metodos

//Busqueda por nombre de vino y devolver toda la info dl vino seleccionado

//Modificar precio del vino a traves del codigo de vino


//Modificar fecha de ingreso al supermercado de un determinado vino por codigo


//Imprimir productos -- genera un archivo. txt con la información del producto (código)


//Muestra total de porductos y el total de sus precios de venta al publico