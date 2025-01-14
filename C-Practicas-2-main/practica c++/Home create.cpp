/*Crea un proyecto de diseño de casas de arquitectura introdduciendo las caracteristicas basicas*/

#include <iostream>
#include <string>

// Clase Habitacion
class Habitacion {
public:
    int ancho;
    int largo;
    int ventanas;
    int puertas;

 // Constructor por defecto
    Habitacion() : ancho(0), largo(0), ventanas(0), puertas(0) {}

    // Constructor con parámetros
    Habitacion(int ancho, int largo, int ventanas, int puertas) {
        this->ancho = ancho;
        this->largo = largo;
        this->ventanas = ventanas;
        this->puertas = puertas;
    }
};

// Clase Casa
class Casa {
public:
    int numHabitaciones;
    Habitacion* habitaciones;

    Casa(int numHabitaciones) {
        this->numHabitaciones = numHabitaciones;
        habitaciones = new Habitacion[numHabitaciones]; // Crea el vector de habitaciones
    }

    ~Casa() {
        delete[] habitaciones; // Libera la memoria asignada
    }

    void agregarHabitacion(int indice, Habitacion habitacion) {
        habitaciones[indice] = habitacion;
    }

    void mostrarCasa() {
        std::cout << "Casa con " << numHabitaciones << " habitaciones:" << std::endl;
        for (int i = 0; i < numHabitaciones; i++) {
            std::cout << "Habitacion " << i + 1 << ":" << std::endl;
            std::cout << "Ancho: " << habitaciones[i].ancho << std::endl;
            std::cout << "Largo: " << habitaciones[i].largo << std::endl;
            std::cout << "Ventanas: " << habitaciones[i].ventanas << std::endl;
            std::cout << "Puertas: " << habitaciones[i].puertas << std::endl;
        }
    }
};

int main() {
    // Crear una casa con 3 habitaciones
    Casa casa(3);

    // Agregar habitaciones
    casa.agregarHabitacion(0, Habitacion(4, 5, 2, 1));
    casa.agregarHabitacion(1, Habitacion(3, 4, 1, 1));
    casa.agregarHabitacion(2, Habitacion(5, 6, 3, 2));

    // Mostrar la casa
    casa.mostrarCasa();

    return 0;
}
  
