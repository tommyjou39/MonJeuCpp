#pragma once
#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void handleInput();
    void update();
    void draw(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;
    sf::Vector2f getPosition() const;

private:
    sf::Texture texture;
    sf::Sprite sprite;
    float speed;
};

