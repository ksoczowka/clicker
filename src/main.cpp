#include "main.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Clicker", sf::Style::Titlebar | sf::Style::Close);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        renderWindow(&window);
        window.display();
    }

    return 0;
}
void renderWindow(sf::RenderTarget* target) {
    target->clear(sf::Color(23, 23, 23));

}
