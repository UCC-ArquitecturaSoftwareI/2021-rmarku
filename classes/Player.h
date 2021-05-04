//
// Created by martin on 16/3/21.
//

#ifndef PROJECTTEMAPLATE_PLAYER_H
#define PROJECTTEMAPLATE_PLAYER_H
#include <SFML/Graphics.hpp>

class Player : public sf::Drawable {
private:
    sf::Vector2f vel;
    sf::Vector2f pos;
    sf::Texture tx;
    sf::Sprite sp;
    enum States {
        Jumping,
        Falling,
        Walking
    } state;

public:
    Player();

    void saltar();
    void mover(int dire);
    void update();
    const sf::Vector2f &getPos() const;

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override ;
};


#endif//PROJECTTEMAPLATE_PLAYER_H
