#pragma once
#include <SFML/Graphics.hpp>
#include "businesses.hpp"

size_t windowHeight = 600;
size_t windowWidth = 800;

void renderWindow(sf::RenderTarget* target);

sf::Mouse cursor;

Student student = Student();
