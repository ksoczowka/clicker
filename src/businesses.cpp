#include "businesses.hpp"

Student::Student() {
    quantity = Quantity();
    upgrade = Quantity(100, 0, 0, 0, 0, false);
    border = sf::RectangleShape(sf::Vector2f(350, 100));
    border.setOutlineColor(sf::Color::Black);
    border.setOutlineThickness(5);
    border.setPosition(sf::Vector2f(15, 200));

    clickArea = sf::CircleShape(60.f);
    clickArea.setPosition(border.getPosition() - sf::Vector2f(10, 10));
    clickArea.setFillColor(sf::Color::Red);

    status = clickStatus::IDLE;
}
void Student::render(sf::RenderTarget* target) {
    target->draw(border);
    target->draw(clickArea);
}
void Student::update(sf::Mouse cursor, sf::Window* window) {
    status = clickStatus::IDLE;
    if(clickArea.getGlobalBounds().contains(sf::Vector2f(cursor.getPosition(*window))) && cursor.isButtonPressed(sf::Mouse::Button::Left)) {
        status = clickStatus::ACTIVE;
    }
    switch(status) {
        case clickStatus::IDLE:
            clickArea.setFillColor(sf::Color::Red);
            break;
        case clickStatus::ACTIVE:
            clickArea.setFillColor(sf::Color::Blue);
            break;
        case clickStatus::AUTO:
            clickArea.setFillColor(sf::Color::Yellow);
            break;
    }
}
