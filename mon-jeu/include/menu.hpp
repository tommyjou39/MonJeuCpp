#pragma once
#include <SFML/Graphics.hpp>

class Menu {
public:
    Menu(float width, float height);
    void draw(sf::RenderWindow& window);
    void moveUp();
    void moveDown();
    int getSelectedIndex();

private:
    int selectedIndex;
    sf::Font font;
    sf::Text options[2];
};
