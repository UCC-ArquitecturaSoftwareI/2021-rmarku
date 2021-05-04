//
// Created by martin on 4/5/21.
//

#include "StateGame.h"
#include "BalaCurva.h"
#include "BalaDerecha.h"
void StateGame::events() {
    sf::RenderWindow *w = screen->getWindows();
    sf::Event event;
    while (w->pollEvent(event)) {
        if (event.type == sf::Event::Closed) w->close();
    }

    // Key Management
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        p.mover(-1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        p.mover(1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        p.saltar();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        sf::Vector2f vel = {2, -2};
        sf::Vector2f pos = p.getPos();

        auto &b = balas.emplace_back(vel, pos);
        b.setDisparo(new BalaDerecha);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
        sf::Vector2f vel = {2, -2};
        sf::Vector2f pos = p.getPos();

        auto &b = balas.emplace_back(vel, pos);
        b.setDisparo(new BalaCurva);
    }
}
void StateGame::update() {
    p.update();
    for (auto &b : balas)
        b.update();
}
void StateGame::draw() {
    sf::RenderWindow *w = screen->getWindows();
    w->clear(sf::Color::White);
    // Draw all entities.

    w->draw(p);

    for (auto &b : balas)
        w->draw(b);

    w->display();
}
StateGame::StateGame() {
}
