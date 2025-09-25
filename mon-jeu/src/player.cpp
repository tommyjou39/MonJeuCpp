#include "../include/player.hpp"


Player::Player() {
    texture.loadFromFile("assets/player.png");
    sprite.setTexture(texture);
    sprite.setPosition(100.f, 300.f);
    speed = 5.f;
}

void Player::handleInput() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        sprite.move(-speed, 0);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        sprite.move(speed, 0);
}

void Player::update() {
    // Rien pour l’instant
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::FloatRect Player::getBounds() const {
    return sprite.getGlobalBounds();
}

sf::Vector2f Player::getPosition() const {
    return sprite.getPosition();
}
