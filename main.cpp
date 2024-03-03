#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(800, 600), "SFML");

int main() {
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition({ 400 - shape.getRadius(), 300 - shape.getRadius() });
    
    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(shape);

        window.display();
    }

    return 0;
}
