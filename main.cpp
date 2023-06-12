#include <iostream>
#include <vector>
#include "Vinedo.h"
#include "generarTXT.h"


//TODO: Arreglar que solo muestre los objetos una vez
//TODO: Arreglar la impresion de archivos
//TODO: Arreglar la ruta de los .txt
//TODO: Arreglar la busqueda de proveedor
//TODO: Arreglar la busqueda de vino
//TODO: Arreglar mostrar un producto,depachos de proovedor, mostrar todos los productos
//TODO: Agregar assert para verificacion
int main(){
    using namespace std;
    vector<Vinedo> vinos;
    int opcion;
    int opcion2;


    //Variables del generador txt
    string contenidoProductos;
    Vinedo* vinoEncontrado = nullptr;
    Vinedo* proveedorEncontrado = nullptr;

    //Variables vino
    int codigoVino;
    string nombreVino;
    string nombreMarca;
    int dia,mes,anio;
    int mesIngreso,anioIngreso;
    string tipoVino;
    float precioSinImpuesto;
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
            case 1: //AGREGRAR PRODUCTO

                system("cls");
                cout << "\n--Agregar producto--\n";
                cout << " " << endl;
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

                vinos.emplace_back(Vinedo(codigoVino,nombreVino,nombreMarca,
                                          dia,mes,anio,mesIngreso,anioIngreso,
                                          tipoVino,precioSinImpuesto,
                                          nombreProveedor,telefonoProveedor,dniProveedor));
                system("cls");
                break;

            case 2: // ELIMINAR PRODUCTO

                system("cls");
                cout << "\n--Eliminar producto--\n";
                cout << " " << endl;
                cout << "Ingrese el Codigo del producto a eliminar\n";
                cin >> codigoVino;

                for (int i = 0; i < vinos.size(); ++i) {
                    if(vinos[i].getCodigo() == codigoVino){
                        vinos.erase(vinos.begin()+i);
                        cout << "Producto eliminado\n";
                    }
                }
                cout << "Producto Elminiado\n";
                system("cls");
                break;

            case 3: // BUSQUEDA POR PROVEEDOR(DNI)

                system("cls");
                cout << "\n--Busqueda de despachos de proveedor--\n";
                cout << " " << endl;
                cout << "Ingrese el DNI del proveedor\n";

                while(opcion2 != 1){
                    for (auto & vino : vinos) {
                        if(vino.getDniProveedor() == dniProveedor){
                            vino.mostrar();
                        }
                    }
                    cout << "Para dejar de mostrar aprete 1" << endl;
                    cin >> opcion2;
                }

                system("cls");
                break;

            case 4: //BUSQUEDA POR VINO

                    system("cls");
                    cout << "\n--Busqueda de producto(Nombre Vino)--\n";
                    cout << "Ingrese el nombre del vino\n";
                    cin >> nombreVino;

                while(opcion2 != 1){
                    for (auto & vino : vinos) {
                        if(vino.getNombreVino() == nombreVino){
                            vino.mostrar();
                        }
                    }
                    cout << "Para dejar de mostrar aprete 1" << endl;
                    cin >> opcion2;
                }
                system("cls");
                break;

            case 5://MODIFICAR PRECIO DEL PRODUCTO
                system("cls");
                cout << "\n--Modificar precio del producto--\n";
                cout << " " << endl;
                cout << "Ingrese el Codigo del producto a modificar\n";
                cin >> codigoVino;

                for (auto & vino : vinos) {
                    if(vino.getCodigo() == codigoVino){
                        cout << "Ingrese el nuevo precio\n";
                        cin >> precioSinImpuesto;
                        vino.setPrecioSinImpuesto(precioSinImpuesto);
                    }
                }

                system("cls");
                break;

            case 6: //MODIFICAR FECHA DE INGRESO
                system("cls");
                cout << "\n--Modificar fecha de ingreso--\n";
                cout << " " << endl;
                cout << "Ingrese el Codigo del producto a modificar\n";
                cin >> codigoVino;

                for(auto & vino : vinos){
                    if(vino.getCodigo() == codigoVino){
                        cout << "Ingrese el nuevo mes de ingreso\n";
                        cin >> mesIngreso;
                        cout << "Ingrese el nuevo anio de ingreso\n";
                        cin >> anioIngreso;
                        vino.setMes(mesIngreso);
                        vino.setAnio(anioIngreso);
                    }
                }
                system("cls");
                break;

            case 7: //IMPRIMIR PRODUCTOS (GENERAR ARCHIVO .TXT)
                system("cls");
                cout << "\n--Generar TXT de Productos\n";
                cout << "Ingrese el código del vino a generar archivo: ";
                cin >> codigoVino;

                // Buscar el vino con el código ingresado

                for (auto& vino : vinos) {
                    if (vino.getCodigo() == codigoVino) {
                        vinoEncontrado = &vino;
                        break;
                    }
                }
                if (vinoEncontrado != nullptr) {
                    std::string contenido = vinoEncontrado->obtenerInformacion();
                    std::string nombreArchivo = "vino_" + std::to_string(codigoVino) + ".txt";
                    generarArchivoTxt(nombreArchivo, contenido);
                } else {
                    cout << "No se encontró un vino con el código ingresado." << endl;
                }
                system("pause");
                break;

            case 8: //IMPRIMIR DATOS DEL PROVEEDOR (GENERAR ARCHIVO .TXT)
                system("cls");
                cout << "\n--Generar TXT del proveedor--\n";
                cout << "Ingrese el DNI del proveedor a generar archivo: ";
                cin >> dniProveedor;

                // Buscar el proveedor con el DNI ingresado

                for (auto& vino : vinos) {
                    if (vino.getDniProveedor() == dniProveedor) {
                        proveedorEncontrado = &vino;
                        break;
                    }
                }

                if (proveedorEncontrado != nullptr) {
                    std::string contenido = proveedorEncontrado->obtenerProveedor();
                    std::string nombreArchivo = "proveedor_" + std::to_string(dniProveedor) + ".txt";
                    generarArchivoTxt(nombreArchivo, contenido);
                } else {
                    cout << "No se encontró un proveedor con el DNI ingresado." << endl;
                }


                system("pause");
                break;

            case 9: //IMPRIMIR PRODUCTOS Y SU VALOR PARA EL PUBLICO

                system("cls");
                cout << "\n--Imprimir todos los productos--\n";
                cout << " " << endl;

                while(opcion2 !=1){
                    for (size_t i = 0; i < vinos.size(); ++i) {
                        vinos[i].mostrarFinal();
                        if (i != vinos.size() - 1) {
                            cout << "-------------------------" << endl;
                        }
                    }
                    cout << "Para dejar de mostrar aprete 1" << endl;
                    cin >> opcion2;
                }
                system("cls");
                break;

            case 0: //SALIR DEL PROGRAMA
                system("cls");
                cout << "Saliendo...\n";
                break;
            default: //OPCION INCORRECTA
                cout << "Opcion incorrecta\n";
                system("pause");
                break;
        }

    }while(opcion != 0);



    return 0;
}
