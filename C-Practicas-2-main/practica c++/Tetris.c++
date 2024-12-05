Crear un Tetris completo con C++ es un proyecto bastante extenso, pero aquí te muestro un ejemplo básico de cómo podrías empezar a implementarlo:
```
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Definir constantes para el tamaño del tablero
const int ANCHO = 10;
const int ALTO = 20;

// Definir estructura para las piezas
struct Pieza {
    int forma[4][4];
    int x, y;
};

// Función para dibujar el tablero
void dibujarTablero(std::vector<std::vector<int>> &tablero) {
    for (int i = 0; i < ALTO; i++) {
        for (int j = 0; j < ANCHO; j++) {
            if (tablero[i][j] == 1) {
                std::cout << "#";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

// Función para generar una pieza aleatoria
Pieza generarPieza() {
    Pieza pieza;
    int forma = rand() % 7; // 7 formas diferentes
    switch (forma) {
        case 0: // I
            pieza.forma[0][0] = 1;
            pieza.forma[0][1] = 1;
            pieza.forma[0][2] = 1;
            pieza.forma[0][3] = 1;
            break;
        // ...
    }
    pieza.x = ANCHO / 2;
    pieza.y = 0;
    return pieza;
}

int main() {
    srand(time(0)); // Inicializar generador de números aleatorios
    std::vector<std::vector<int>> tablero(ALTO, std::vector<int>(ANCHO, 0));
    Pieza pieza = generarPieza();

    while (true) {
        dibujarTablero(tablero);
        // Mover pieza
        // Comprobar colisiones
        // Eliminar líneas completas
        // Generar nueva pieza
    }

    return 0;
}
''
