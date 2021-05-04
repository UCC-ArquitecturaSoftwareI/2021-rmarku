//
// Created by martin on 13/4/21.
//

#ifndef PROJECTTEMAPLATE_PLAYER_H
#define PROJECTTEMAPLATE_PLAYER_H


class player {
private:
    sf::Texture textura;
    sf::Sprite sprite;

public:
    player(){

        if (!textura.loadFromFile("assets/images/player.png")) {
            std::cout << "Error loading player.png" << std::endl;
        }
        sprite.setTexture(textura);
        sprite.setTextureRect(sf::IntRect(0, 0, tx_player.getSize().x/2, tx_player.getSize().y / 4));
        sprite.setPosition(sf::Vector2f(400.f, 300.f));
    }
};


#endif//PROJECTTEMAPLATE_PLAYER_H
