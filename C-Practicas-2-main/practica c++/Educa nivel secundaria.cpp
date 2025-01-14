/*Crea un software educativo nivel secundaria*/

#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Crear una ventana de 800x600 pixels
    sf::RenderWindow window(sf::VideoMode(800, 600), "Software Educativo");

    // Crear un menú principal
    sf::Text menu;
    menu.setFont(sf::Font::getDefaultFont());
    menu.setCharacterSize(24);
    menu.setFillColor(sf::Color::Black);

    // Crear pantallas para cada área
    sf::Text math;
    math.setFont(sf::Font::getDefaultFont());
    math.setCharacterSize(24);
    math.setFillColor(sf::Color::Black);

    sf::Text science;
    science.setFont(sf::Font::getDefaultFont());
    science.setCharacterSize(24);
    science.setFillColor(sf::Color::Black);

    // Variable para controlar la pantalla actual
    int currentScreen = 0;

    // Bucle principal
    while (window.isOpen())
    {
        // Manejar eventos
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Cerrar la ventana
            if (event.type == sf::Event::Closed)
                window.close();

            // Verificar si se presionó un botón del menú
            if (event.type == sf::Event::MouseButtonPressed)
            {
                // Verificar qué botón se presionó
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    // Mostrar pantalla de Matemáticas
                    if (event.mouseButton.x > 100 && event.mouseButton.x < 300 && event.mouseButton.y > 100 && event.mouseButton.y < 200)
                    {
                        currentScreen = 1;
                    }
                    // Mostrar pantalla de Ciencias
                    else if (event.mouseButton.x > 400 && event.mouseButton.x < 600 && event.mouseButton.y > 100 && event.mouseButton.y < 200)
                    {
                        currentScreen = 2;
                    }
                }
            }
        }

        // Mostrar menú principal
        if (currentScreen == 0)
        {
            menu.setString("Menú Principal");
            window.clear();
            window.draw(menu);
        }
        // Mostrar pantalla de Matemáticas
        else if (currentScreen == 1)
        {
            math.setString("Matemáticas - Álgebra");
            window.clear();
            window.draw(math);
        }
        // Mostrar pantalla de Ciencias
        else if (currentScreen == 2)
        {
            science.setString("Ciencias - Biología");
            window.clear();
            window.draw(science);
        }

        // Mostrar el contenido de la ventana
        window.display();
    }

    return 0;
}
``
