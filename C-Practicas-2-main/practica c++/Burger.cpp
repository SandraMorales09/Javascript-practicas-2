/*crear una aplicación de burgers*/

#include <iostream>
#include <string>

using namespace std;

struct Burger {
    string nombre;
    float precio;
    string ingredientes;
};

int main() {
    Burger menu[] = {
        {"Clásica", 5.99, "Carne, lechuga, tomate, queso"},
        {"Bacon", 6.99, "Carne, bacon, lechuga, tomate, queso"},
        {"Veggie", 5.49, "Vegetales, queso, lechuga, tomate"}
    };

    int numBurgers = sizeof(menu) / sizeof(menu[0]);

    cout << "Bienvenido a la App Burger!\n";
    cout << "Menú:\n";

    for (int i = 0; i < numBurgers; i++) {
        cout << i + 1 << ". " << menu[i].nombre << " ($" << menu[i].precio << ")\n";
        cout << "Ingredientes: " << menu[i].ingredientes << "\n\n";
    }

    int seleccion;
    cout << "Ingrese el número de la burger que desea ordenar: ";
    cin >> seleccion;

    if (seleccion >= 1 && seleccion <= numBurgers) {
        cout << "Ha ordenado una burger " << menu[seleccion - 1].nombre << " por $" << menu[seleccion - 1].precio << "\n";
    } else {
        cout << "Opción inválida. Intente de nuevo.\n";
    }

    return 0;
}

