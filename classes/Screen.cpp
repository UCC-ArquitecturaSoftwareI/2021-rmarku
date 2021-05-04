//
// Created by martin on 4/5/21.
//

#include "Screen.h"
#include "StateGame.h"
#include "StateLogo.h"

Screen::Screen() {
    w = new sf::RenderWindow(sf::VideoMode(800, 600), "Test");
    w->setFramerateLimit(60);
    state = nullptr;
    changeState(new StateLogo);
}
bool Screen::isOpen() {
    return w->isOpen();
}
void Screen::events() {
    state->events();
}
void Screen::update() {
    state->update();
}
void Screen::draw() {
    state->draw();
}
sf::RenderWindow *Screen::getWindows() {
    return w;
}
void Screen::changeState(State *s) {
    delete state;
    state = s;
    state->setScreen(this);
}
