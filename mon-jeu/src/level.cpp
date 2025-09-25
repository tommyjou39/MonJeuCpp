#include "../include/level.hpp"
Level::Level() {
    goal.setSize(sf::Vector2f(50.f, 100.f));
    goal.setFillColor(sf::Color::Yellow);
    goal.setPosition(1200.f, 300.f); // Loin à droite
}

void Level::draw(sf::RenderWindow& window) {
    window.draw(goal);
}

bool Level::checkCollision(sf::FloatRect playerBounds) {
    return playerBounds.intersects(goal.getGlobalBounds());
}
