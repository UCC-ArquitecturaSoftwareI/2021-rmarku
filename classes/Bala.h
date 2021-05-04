//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_BALA_H
#define PROJECTTEMAPLATE_BALA_H


#include <SFML/Graphics.hpp>
#include "BalaStrategy.h"
class BalaStrategy;
class Bala : public sf::Drawable {
private:
    sf::Vector2f vel;
    sf::Vector2f pos;
    sf::Texture tx;
    sf::Sprite sp;
    BalaStrategy *disparo;

public:
    Bala(sf::Vector2f vel, sf::Vector2f pos);
    void update();
    const sf::Vector2f &getVel() const;
    const sf::Vector2f &getPos() const;
    void setDisparo(BalaStrategy *disparo);
    void setVel(const sf::Vector2f &vel);

private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif//PROJECTTEMAPLATE_BALA_H
