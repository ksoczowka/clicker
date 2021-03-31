#pragma once

#include "utility.hpp"
#include <SFML/Graphics.hpp>

enum class clickStatus {
    IDLE,
    AUTO,
    ACTIVE
};
class Business {
public:
    void render(sf::RenderTarget* target);
    void update(sf::Mouse cursor, sf::Window* window);
protected:
    bool upgradable;
    sf::RectangleShape border;
    sf::CircleShape clickArea;
    sf::RectangleShape upgradeButton;
    clickStatus status;
    Quantity quantity;
    Quantity upgradeCost;
    Quantity upgradeCostAdd;
    Quantity income;
    sf::Text quantityText;
    sf::Text upgradeCostText;
    sf::Text incomeText;
};
class Student : public Business {
public:
    Student();    
};
class Section : public Business {
public:
    Section();    
};
class Dojo : public Business {
public:
    Dojo();    
};
class Club : public Business {
public:
    Club();    
};
class Branch : public Business {
public:
    Branch();    
};
class ContOrg : public Business {
public:
    ContOrg();    
};
class WorldOrg : public Business {
public:
    WorldOrg();    
};