//
// Created by martin on 16/3/21.
//

#define ACCY 0.6
#define ACCX 0.2

#define VEL 5
#include "Player.h"

void Player::update() {
    // Mov en x
    if (vel.x > ACCX) {
        vel.x = vel.x - ACCX;
        sp.setScale(1, 1);
    } else if (vel.x < -ACCX) {
        vel.x = vel.x + ACCX;
        sp.setScale(-1, 1);
    } else {
        vel.x = 0;
    }
    pos.x = pos.x + vel.x;
    // Mov en y
    vel.y = vel.y + ACCY;
    pos.y = pos.y + vel.y;
    if (pos.y >= 500) {
        vel.y = 0;
        pos.y = 500;
        state = Walking;
    }

    sp.setPosition(pos);
}
void Player::saltar() {
    if (state == Walking){
        vel.y = -20;
        state = Jumping;
    }
}

Player::Player() {
    tx.loadFromFile("assets/images/player.png");
    sp.setTexture(tx);
    sp.setOrigin(sp.getTextureRect().width / 2, sp.getTextureRect().height / 2);
    state = Falling;
}
void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(sp, states);
}
void Player::mover(int dire) {
    if (dire > 0)
        vel.x = VEL;
    else if (dire < 0)
        vel.x = -1 * VEL;
}
const sf::Vector2f &Player::getPos() const {
    return pos;
}
