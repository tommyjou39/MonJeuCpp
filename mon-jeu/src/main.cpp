#include <SFML/Graphics.hpp>
#include "../include/player.hpp"
#include "../include/score.hpp"
#include "../include/level.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Jeu SFML avec Score et Scrolling");
    window.setFramerateLimit(60);

    Player player;
    Score score;
    Level level;

    sf::View camera(sf::FloatRect(0.f, 0.f, 800.f, 600.f));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        player.handleInput();
        player.update();

        // Scroll la caméra avec le joueur
        sf::Vector2f pos = player.getPosition();
        if (pos.x > 400)
            camera.setCenter(pos.x, 300.f);
        else
            camera.setCenter(400.f, 300.f);

        window.setView(camera);

        // Collision avec l’objectif
        if (level.checkCollision(player.getBounds())) {
            score.add(10);
        }

        window.clear();
        level.draw(window);
        player.draw(window);
        window.setView(window.getDefaultView()); // Pour afficher le score fixe
        score.draw(window);
        window.display();
    }

    return 0;
}
