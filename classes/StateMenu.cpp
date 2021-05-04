//
// Created by martin on 4/5/21.
//

#include "StateMenu.h"
#include "StateGame.h"
#include <SFML/Graphics/RenderWindow.hpp>
StateMenu::StateMenu() {
    fuente.loadFromFile("assets/FreePixel.ttf");
    Logo.setFont(fuente);
    Logo.setFillColor(sf::Color(150, 150, 0));
    Logo.setCharacterSize(42);
    Logo.setStyle(sf::Text::Bold);
    Logo.setString("Enter para Comenzar");
    sf::Vector2f size = {Logo.getGlobalBounds().width, Logo.getGlobalBounds().width};
    Logo.setPosition(400 - (size.x / 2), 300 - (size.y / 2));
    Logo.setPosition(300, 150);
}
void StateMenu::events() {
    sf::RenderWindow *w = screen->getWindows();
    sf::Event event;
    while (w->pollEvent(event)) {
        if (event.type == sf::Event::Closed) w->close();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
        screen->changeState(new StateGame);
    }
}

void StateMenu::update() {
}

void StateMenu::draw() {
    sf::RenderWindow *w = screen->getWindows();
    w->clear(sf::Color::White);
    w->draw(Logo);
    w->display();
}
