#include <iostream>
#include <vector>
#include "Vinedo.h"

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

//TODO: clase proveedor:
//1) nombre
//2) telefono
//3) dni

//TODO: menu:
//1) Agregar productos al sistema. en caso de que no existan ya.
//2) Eliminar productos del sistema.
//3) Búsqueda por proveedor --- lista los productos despachados por ese proveedor.
//4) Búsqueda por vino -----lista la info de los vinos (nombre)
//5) Modificar precio del producto ---- permite modificar el precio de un producto (código)
//6) Modificar fecha de ingreso al supermercado de un determinado vino.
//7) Imprimir productos -- genera un archivo. txt con la información del producto (código)
//8) Imprimir teléfono de un proveedor ---- genera un archivo.txt con los datos de un proveedor.
//9) Total de productos --.
//-- genera un archivo. txt con la info de todos los vinos y al final
//muestra la suma total de todos sus precios de venta al publico.

int main(){
    using namespace std;
    vector<Vinedo> vinos;
    int opcion;

    //Variables vino
    int codigoVino;
    string nombreVino;
    string nombreMarca;
    int dia,mes,anio;
    int mesIngreso,anioIngreso;
    char tipoVino;
    float precioSinImpuesto;

    //Variables Proveedor
    string nombreProveedor;
    int telefonoProveedor;
    int dniProveedor;


    do {
        system("cls");
        cout << "\n--- Menu de opciones ---\n";
        cout << "1) Agregar prducto(Vino)\n";
        cout << "2) Eliminar producto\n";
        cout << "3) Busqueda despachos de proveedor \n";
        cout << "4) Busqueda de producto(vino)\n";
        cout << "5) Modificar precio del producto\n";
        cout << "6) Modificar fecha de ingreso\n";
        cout << "7) Imprimir productos\n";
        cout << "8) Imprimir datos del proovedor\n";
        cout << "9) Imprimir productos y su valor para el publico --.\n";
        cout << "0) Salir.\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("cls");
                cout << "Ingrese el codigo del vino\n";
                cin >> codigoVino;
                cout << "Ingrese el nombre del vino\n";
                cin >> nombreVino;
                cout << "Ingrese el nombre de la marca\n";
                cin >> nombreMarca;

                system("cls");
                cout << "Ingrese el dia de fabricacion\n";
                cin >> dia;
                cout << "Ingrese el mes de fabricacion\n";
                cin >> mes;
                cout << "Ingrese el anio de fabricacion\n";
                cin >> anio;
                cout << "Ingrese el mes de ingreso al supermercado\n";
                cin >> mesIngreso;
                cout << "Ingrese el anio de ingreso al supermercado\n";
                cin >> anioIngreso;

                system("cls");
                cout << "Ingrese el tipo de vino\n";
                cout << "M(Malbec) , T(Tinto) , B(Blanco)\n";
                cin >> tipoVino;
                cout << "Ingrese el precio sin impuesto\n";
                cin >> precioSinImpuesto;

                system("cls");
                cout << "Ingrese el nombre del proveedor\n";
                cin >> nombreProveedor;
                cout << "Ingrese el telefono del proveedor\n";
                cin >> telefonoProveedor;
                cout << "Ingrese el dni del proveedor\n";
                cin >> dniProveedor;


                break;
            case 2:
                cout << "Eliminar producto\n";
                break;
            case 3:
                cout << "Busqueda despachos de proveedor\n";
                break;
            case 4:
                cout << "Busqueda de producto(vino)\n";
                break;
            case 5:
                cout << "Modificar precio del producto\n";
                break;
            case 6:
                cout << "Modificar fecha de ingreso\n";
                break;
            case 7:
                cout << "Imprimir productos\n";
                break;
            case 8:
                cout << "Imprimir datos del proovedor\n";
                break;
            case 9:
                cout << "Imprimir productos y su valor para el publico --.\n";
                break;
            case 0:
                cout << "Salir\n";
                break;
            default:
                cout << "Opcion incorrecta\n";
                break;
        }

    }while(opcion != 0);



    return 0;
}
