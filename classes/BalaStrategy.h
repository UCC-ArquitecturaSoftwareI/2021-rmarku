//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_BALASTRATEGY_H
#define PROJECTTEMAPLATE_BALASTRATEGY_H


#include "Bala.h"
class Bala;
class BalaStrategy {
public:
    virtual sf::Vector2f calcPos(Bala &b) = 0;
};


#endif//PROJECTTEMAPLATE_BALASTRATEGY_H
