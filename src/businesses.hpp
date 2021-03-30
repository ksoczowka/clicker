#pragma once

#include "utility.hpp"
#include <SFML/Graphics.hpp>

enum class clickStatus {
    IDLE,
    AUTO,
    ACTIVE
};

class Student {
 public:
    Student();
    void render(sf::RenderTarget* target);
    void update(sf::Mouse cursor, sf::Window* window);
 private:
    sf::RectangleShape border;
    sf::CircleShape clickArea;
    clickStatus status;
    Quantity quantity;
    Quantity upgrade;
};