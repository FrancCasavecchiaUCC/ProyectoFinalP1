#pragma once
#include <string>


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
    std::string v_tipoVino;
    float v_precioSinImpuesto;
    float v_precioVentaPublico;
    std::string v_nombreProveedor;
    int v_telefonoProveedor;
    int v_dniProveedor;

public:
    Vinedo(int codigo, std::string nombreVino, std::string nombreMarca,
           int dia, int mes, int anio,
           int mesIngreso, int anioIngreso,
           std::string tipoVino,
           float precioSinImpuesto,
           std::string nombreProveedor, int telefonoProveedor, int dniProveedor);

    int getCodigo();
    std::string getNombreVino();
    int getDniProveedor();

    int setMes(int mes);
    int setAnio(int anio);
    float setPrecioSinImpuesto(float precioSinImpuesto);

    //Metodos

    void mostrar();
    void mostrarFinal();
    float calcularPrecioPublico();

    std::string obtenerInformacion()const;
    std::string obtenerProveedor()const;

};