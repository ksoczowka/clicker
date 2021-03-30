#include "main.hpp"

int main() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Clicker", sf::Style::Titlebar | sf::Style::Close, settings);
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        student.update(cursor, &window);
        renderWindow(&window);
        window.display();
    }

    return 0;
}
void renderWindow(sf::RenderTarget* target) {
    target->clear(sf::Color(64, 64, 64));
    student.render(target);
}
