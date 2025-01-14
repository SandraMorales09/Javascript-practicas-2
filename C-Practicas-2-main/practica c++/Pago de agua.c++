/*crea un registro de pago de Agua*/

#include <iostream>
#include <string>

using namespace std;

struct PagoAgua {
    string nombre;
    float monto;
    string fecha;
};

int main() {
    int numPagos;
    cout << "Ingrese el número de pagos: ";
    cin >> numPagos;

    PagoAgua pagos[numPagos];

    for (int i = 0; i < numPagos; i++) {
        cout << "Ingrese el nombre del cliente " << i + 1 << ": ";
        cin >> pagos[i].nombre;
        cout << "Ingrese el monto del pago: ";
        cin >> pagos[i].monto;
        cout << "Ingrese la fecha del pago (dd/mm/aaaa): ";
        cin >> pagos[i].fecha;
    }

    cout << "\nRegistros de pagos:\n";
    for (int i = 0; i < numPagos; i++) {
        cout << "Cliente: " << pagos[i].nombre << endl;
        cout << "Monto: $" << pagos[i].monto << endl;
        cout << "Fecha: " << pagos[i].fecha << endl;
        cout << "\n";
    }

    return 0;
}
```
