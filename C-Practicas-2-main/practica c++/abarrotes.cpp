/*Este programa permitir� a los usuarios registrar productos, mostrar el inventario, agregar stock y realizar ventas*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura para representar un producto
struct Producto {
    string nombre;
    int stock;
    float precio;
};

// Vector para almacenar los productos
vector<Producto> inventario;

// Funci�n para registrar un producto
void registrarProducto() {
    Producto nuevoProducto;
    cout << "Ingrese el nombre del producto: ";
    cin.ignore(); // Ignorar el salto de l�nea anterior
    getline(cin, nuevoProducto.nombre);
    cout << "Ingrese el stock inicial: ";
    cin >> nuevoProducto.stock;
    cout << "Ingrese el precio: ";
    cin >> nuevoProducto.precio;
    inventario.push_back(nuevoProducto);
}

// Funci�n para mostrar el inventario
void mostrarInventario() {
    cout << "Inventario actual:" << endl;
    for (const auto& producto : inventario) {
        cout << producto.nombre << " - Stock: " << producto.stock << " - Precio: " << producto.precio << endl;
    }
}

// Funci�n para agregar stock
void agregarStock() {
    string nombreProducto;
    int cantidad;
    cout << "Ingrese el nombre del producto: ";
    cin.ignore(); // Ignorar el salto de l�nea anterior
    getline(cin, nombreProducto);
    cout << "Ingrese la cantidad a agregar: ";
    cin >> cantidad;
    for (auto& producto : inventario) {
        if (producto.nombre == nombreProducto) {
            producto.stock += cantidad;
            cout << "Stock actualizado con �xito." << endl;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

// Funci�n para realizar la venta
void realizarVenta() {
    string nombreProducto;
    int cantidad;
    cout << "Ingrese el nombre del producto: ";
    cin.ignore(); // Ignorar el salto de l�nea anterior
    getline(cin, nombreProducto);
    cout << "Ingrese la cantidad a vender: ";
    cin >> cantidad;
    for (auto& producto : inventario) {
        if (producto.nombre == nombreProducto) {
            if (producto.stock >= cantidad) {
                producto.stock -= cantidad;
                cout << "Venta realizada con �xito." << endl;
                return;
            } else {
                cout << "No hay suficiente stock." << endl;
                return;
            }
        }
    }
    cout << "Producto no encontrado." << endl;
}

int main() {
    int opcion;
    do {
        cout << "Software de abarrotes" << endl;
        cout << "1. Registrar producto" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Agregar stock" << endl;
        cout << "4. Realizar venta" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarProducto();
                break;
            case 2:
                mostrarInventario();
                break;
            case 3:
                agregarStock();
                break;
            case 4:
                realizarVenta();
                break;
            case 5:
                cout << "Hasta luego." << endl;
                break;
            default:
                cout << "Opci�n inv�lida." << endl;
        }
    } while (opcion != 5);
    return 0;
}
