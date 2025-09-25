#pragma once
#include <SFML/Graphics.hpp>

class Score {
public:
    Score();
    void add(int points);
    void draw(sf::RenderWindow& window);

private:
    int value;
    sf::Font font;
    sf::Text text;
};
