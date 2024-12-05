#include <iostream>
#include <cstdlib> // Para std::rand()
#include <ctime> // Para std::time()

// Función para generar una pregunta de suma y verificar la respuesta del estudiante
void preguntaSuma() {
    int num1 = std::rand() % 10; // Genera un número aleatorio entre 0 y 9
    int num2 = std::rand() % 10; // Genera un número aleatorio entre 0 y 9
    int respuesta;

    std::cout << "¿Cuánto es " << num1 << " + " << num2 << "? ";
    std::cin >> respuesta;

    if(respuesta == (num1 + num2)) {
        std::cout << "¡Correcto! Muy bien hecho.\n";
    } else {
        std::cout << "Incorrecto. La respuesta correcta es " << (num1 + num2) << ".\n";
    }
}

int main() {
    // Inicializa el generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "Bienvenido al programa de matemáticas para primaria.\n";

    // Pregunta al estudiante 5 veces
    for(int i = 0; i < 5; ++i) {
        preguntaSuma();
    }

    std::cout << "¡Gracias por jugar y aprender con nosotros!\n";

    return 0;
}