//
// Created by martin on 4/5/21.
//

#include "BalaCurva.h"
#include <cmath>
sf::Vector2f BalaCurva::calcPos(Bala &b) {
    sf::Vector2f vel = b.getVel();
    sf::Vector2f new_vel = b.getVel();
    angulo += 0.02;
    float modulo = sqrt(vel.x * vel.x + vel.y * vel.y);
    new_vel.x = modulo * cos(angulo);
    new_vel.y = modulo * sin(angulo);
    b.setVel(new_vel);
    return b.getPos() + b.getVel();
}
