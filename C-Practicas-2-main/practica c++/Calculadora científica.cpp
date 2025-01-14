
/*Crea una calculadora científica*/

#include <iostream>
#include <cmath>

int main() {
    int opcion;
    double numero1, numero2, resultado;

    do {
        std::cout << "Calculadora científica\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Resta\n";
        std::cout << "3. Multiplicación\n";
        std::cout << "4. División\n";
        std::cout << "5. Potencia\n";
        std::cout << "6. Raíz cuadrada\n";
        std::cout << "7. Logaritmo natural\n";
        std::cout << "8. Logaritmo base 10\n";
        std::cout << "9. Seno\n";
        std::cout << "10. Coseno\n";
        std::cout << "11. Tangente\n";
        std::cout << "12. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Introduce el primer número: ";
                std::cin >> numero1;
                std::cout << "Introduce el segundo número: ";
                std::cin >> numero2;
                resultado = numero1 + numero2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 2:
                std::cout << "Introduce el primer número: ";
                std::cin >> numero1;
                std::cout << "Introduce el segundo número: ";
                std::cin >> numero2;
                resultado = numero1 - numero2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 3:
                std::cout << "Introduce el primer número: ";
                std::cin >> numero1;
                std::cout << "Introduce el segundo número: ";
                std::cin >> numero2;
                resultado = numero1 * numero2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 4:
                std::cout << "Introduce el primer número: ";
                std::cin >> numero1;
                std::cout << "Introduce el segundo número: ";
                std::cin >> numero2;
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                    std::cout << "Resultado: " << resultado << std::endl;
                } else {
                    std::cout << "Error: División por cero\n";
                }
                break;
            case 5:
                std::cout << "Introduce la base: ";
                std::cin >> numero1;
                std::cout << "Introduce el exponente: ";
                std::cin >> numero2;
                resultado = pow(numero1, numero2);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 6:
                std::cout << "Introduce el número: ";
                std::cin >> numero1;
                resultado = sqrt(numero1);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 7:
                std::cout << "Introduce el número: ";
                std::cin >> numero1;
                resultado = log(numero1);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 8:
                std::cout << "Introduce el número: ";
                std::cin >> numero1;
                resultado = log10(numero1);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 9:
                std::cout << "Introduce el ángulo en grados: ";
                std::cin >> numero1;
                resultado = sin(numero1 * M_PI / 180);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 10:
                std::cout << "Introduce el ángulo en grados: ";
                std::cin >> numero1;
                resultado = cos(numero1 * M_PI / 180);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 11:
                std::cout << "Introduce el ángulo en grados: ";
                std::cin >> numero1;
                resultado = tan(numero1 * M_PI / 180);
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 12:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no
```
