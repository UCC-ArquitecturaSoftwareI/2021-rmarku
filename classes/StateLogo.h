//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_STATELOGO_H
#define PROJECTTEMAPLATE_STATELOGO_H


#include "State.h"
#include <SFML/Graphics.hpp>
class StateLogo: public State {
private:
    sf::Font fuente;
    sf::Text Logo;
    int cont;

public:
    StateLogo();

private:
    void events() override;
    void update() override;
    void draw() override;
};


#endif//PROJECTTEMAPLATE_STATELOGO_H
