//
// Created by martin on 4/5/21.
//

#include "Bala.h"
Bala::Bala(sf::Vector2f vel, sf::Vector2f pos) : vel(vel), pos(pos) {
    tx.loadFromFile("assets/images/bala.png");
    sp.setTexture(tx);
    sp.setOrigin(sp.getTextureRect().width / 2, sp.getTextureRect().height / 2);
}
void Bala::update() {
    pos = disparo->calcPos(*this);
    sp.setPosition(pos);
}

void Bala::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(sp, states);
}
const sf::Vector2f &Bala::getVel() const {
    return vel;
}
const sf::Vector2f &Bala::getPos() const {
    return pos;
}
void Bala::setDisparo(BalaStrategy *disparo) {
    Bala::disparo = disparo;
}
void Bala::setVel(const sf::Vector2f &vel) {
    Bala::vel = vel;
}
