//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_BALACURVA_H
#define PROJECTTEMAPLATE_BALACURVA_H


#include "BalaStrategy.h"
class BalaCurva : public BalaStrategy{
    float angulo;
public:
    BalaCurva(){angulo=0;};
    sf::Vector2f calcPos(Bala &b) override;
};


#endif//PROJECTTEMAPLATE_BALACURVA_H
