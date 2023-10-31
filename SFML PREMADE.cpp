//Esto es una plantilla de SFML el codigo siguiente te permite verificar su correcto funcionamiento

#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test");

    // Create a circle shape
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(375, 275);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(); // Clear the window

        // Draw the circle
        window.draw(circle);

        window.display(); // Display the contents of the window
    }

    return 0;
}