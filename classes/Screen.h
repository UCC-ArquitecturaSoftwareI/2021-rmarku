//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_SCREEN_H
#define PROJECTTEMAPLATE_SCREEN_H
#include "Player.h"
#include "State.h"
#include <SFML/Graphics.hpp>
class State;

class Screen {
private:
    sf::RenderWindow *w;
    State *state;
public:
    Screen();
    bool isOpen();
    void events();
    void update();
    void draw();
    sf::RenderWindow *getWindows();
    void changeState(State *s);
};


#endif//PROJECTTEMAPLATE_SCREEN_H
