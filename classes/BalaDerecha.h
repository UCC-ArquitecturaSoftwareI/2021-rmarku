//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_BALADERECHA_H
#define PROJECTTEMAPLATE_BALADERECHA_H


#include "BalaStrategy.h"
class BalaDerecha : public BalaStrategy{
public:
    sf::Vector2f calcPos(Bala &b) override;
};


#endif//PROJECTTEMAPLATE_BALADERECHA_H
