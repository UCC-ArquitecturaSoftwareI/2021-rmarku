//
// Created by martin on 4/5/21.
//

#include "StateLogo.h"
#include "StateGame.h"
#include "StateMenu.h"
#include <iostream>

StateLogo::StateLogo() {
    fuente.loadFromFile("assets/FreePixel.ttf");
    Logo.setFont(fuente);
    Logo.setFillColor(sf::Color(0, 0, 200));
    Logo.setCharacterSize(100);
    Logo.setStyle(sf::Text::Bold);
    Logo.setString("MarkUs\nGames");
    sf::Vector2f size = {Logo.getGlobalBounds().width, Logo.getGlobalBounds().width};
    Logo.setPosition(400-(size.x/2), 300-(size.y/2));
    cont = 0;
}
void StateLogo::events() {
    sf::RenderWindow *w = screen->getWindows();
    sf::Event event;
    while (w->pollEvent(event)) {
        if (event.type == sf::Event::Closed) w->close();
    }
}

void StateLogo::update() {
    if (++cont > (3 * 60)) {
        this->screen->changeState(new StateMenu);
    }
}

void StateLogo::draw() {
    sf::RenderWindow *w = screen->getWindows();
    w->clear(sf::Color::White);
    w->draw(Logo);
    w->display();
}
