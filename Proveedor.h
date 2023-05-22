#pragma once
#include <string>

class Proveedor{
private:
    std::string p_nombreProveedor;
    int p_telefonoProveedor;
    int p_dniProveedor;
public:
    Proveedor(std::string nombreProveedor, int telefonoProveedor, int dniProveedor);

    Proveedor();

    std::string getNombreProveedor();
    int getTelefonoProveedor();
    int getDniProveedor();


};