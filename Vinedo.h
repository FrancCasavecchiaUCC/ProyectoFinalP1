#pragma once
#include <string>
#include "Proveedor.h"

//TODO: clase con:
//1) codigo del vino
//2) nombre del Vino
//3) nombre de la marca
//4) año de fabricación: (dia,mes,año)
//5) fecha de ingreso al supermercado: (mes,año)
//6) tipo vino: malbec, tinto o blanco
//7) precio sin impuesto
//8) precio de venta al publico (+15%)
//9) datos del proveedor: (nombre,telefono,dni)

class Vinedo{
private:
    int v_codigo;
    std::string v_nombreVino;
    std::string v_nombreMarca;
    int v_dia;
    int v_mes;
    int v_anio;
    int v_mesIngreso;
    int v_anioIngreso;
    char v_tipoVino;
    float v_precioSinImpuesto;
    float v_precioVentaPublico;

    //composcion con proovedor
    Proveedor proveedor;

public:
    Vinedo(int codigo, std::string nombreVino, std::string nombreMarca,
           int dia, int mes, int anio,
           int mesIngreso, int anioIngreso,
           char tipoVino,
           float precioSinImpuesto,
           Proveedor proveedor);

    int getCodigo();
    std::string getNombreVino();
    std::string getNombreMarca();
    int getDia();
    int getMes();
    int getAnio();
    int getMesIngreso();
    int getAnioIngreso();
    char getTipoVino();
    float getPrecioSinImpuesto();
    Proveedor getProveedor();

    //Busqueda por nombre de vino y devolver toda la info dl vino seleccionado
//Modificar precio del vino a traves del codigo de vino
//Modificar fecha de ingreso al supermercado de un determinado vino por codigo
//Imprimir productos -- genera un archivo. txt con la información del producto (código)
//Muestra total de porductos y el total de sus precios de venta al publico
    //Metodos
    void buscarNombre(std::string nombreVino);
    void modifPrecio(int codigo, float precio);
    void modifFecha(int codigo, int mes, int anio);
    void imprimirProductos();
    void mostrarTotal();

};