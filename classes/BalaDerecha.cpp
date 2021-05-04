//
// Created by martin on 4/5/21.
//

#include "BalaDerecha.h"
sf::Vector2f BalaDerecha::calcPos(Bala &b) {
    return b.getPos() + b.getVel();
}
