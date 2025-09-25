#include "../include/score.hpp"
#include <string>

Score::Score() : value(0) {
    font.loadFromFile("assets/arial.ttf");
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(10.f, 10.f);
    text.setString("Score: 0");
}

void Score::add(int points) {
    value += points;
    text.setString("Score: " + std::to_string(value));
}

void Score::draw(sf::RenderWindow& window) {
    window.draw(text);
}
