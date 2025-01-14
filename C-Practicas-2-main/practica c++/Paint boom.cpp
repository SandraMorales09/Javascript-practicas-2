 ``` 
 #include <SFML/Graphics.hpp> 
 int main() { 
 
 // Crear una ventana de 800x600 pixels 
 sf::RenderWindow window(sf::VideoMode(800, 600), "Paint");
 
 // Crear un rect�ngulo para dibujar
  sf::RectangleShape rectangle(sf::Vector2f(10, 10)); 
  
  // Establecer el color del rect�ngulo 
  rectangle.setFillColor(sf::Color::Red); 
  
  // Variable para controlar si se est� dibujando
   bool isDrawing = false; 
   
// Bucle principal
    while (window.isOpen()) 
	{ 
// Manejar eventos
 sf::Event event; while
  (window.pollEvent(event))
   { // Cerrar la ventana
    if (event.type == sf::Event::Closed) window.close();
	 
	// Iniciar dibujo con clic izquierdo 
	if (event.type == sf::Event::MouseButtonPressed && 
	event.mouseButton.button == sf::Mouse::Left)
	 isDrawing = true; 
	 
	 // Detener dibujo con clic derecho 
	 if (event.type == sf::Event::MouseButtonReleased && 
	 event.mouseButton.button == sf::Mouse::Left) 
	 isDrawing = false; } 
	 
	 // Dibujar si se est� dibujando 
	 if (isDrawing) 
	 { 
	 
	 // Obtener la posici�n del mouse
	  sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
	  
	 // Establecer la posici�n del rect�ngulo
	  rectangle.setPosition(mousePosition.x, mousePosition.y); 
	  // Dibujar el rect�ngulo 
	  window.draw(rectangle); } 
	  
	  // Mostrar el contenido de la ventana
	   window.display();
	    
		} 
		return 0;
		 } 
		 ```
