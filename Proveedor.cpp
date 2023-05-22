#include "Proveedor.h"

//TODO:
//Buscar productos por proovedor
//Imprimir los datos del proveedor a un .txt

Proveedor::Proveedor(std::string nombreProveedor, int telefonoProveedor, int dniProveedor) {
    p_nombreProveedor = nombreProveedor;
    p_telefonoProveedor = telefonoProveedor;
    p_dniProveedor = dniProveedor;
}

std::string Proveedor::getNombreProveedor() {return p_nombreProveedor;}
int Proveedor::getTelefonoProveedor() {return p_telefonoProveedor;}
int Proveedor::getDniProveedor() {return p_dniProveedor;}




