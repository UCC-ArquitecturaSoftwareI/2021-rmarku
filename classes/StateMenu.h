//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_STATEMENU_H
#define PROJECTTEMAPLATE_STATEMENU_H


#include "State.h"
class StateMenu : public State{
private:
    sf::Font fuente;
    sf::Text Logo;
public:
    StateMenu();

private:
    void events() override;
    void update() override;
    void draw() override;
};


#endif//PROJECTTEMAPLATE_STATEMENU_H
