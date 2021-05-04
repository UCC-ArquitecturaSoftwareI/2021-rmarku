//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_STATEGAME_H
#define PROJECTTEMAPLATE_STATEGAME_H


#include "Bala.h"
#include "State.h"
class StateGame : public State{
private:
    Player p;
    std::vector<Bala> balas;
public:
    StateGame();
    void events() override;
    void update() override;
    void draw() override;
};


#endif//PROJECTTEMAPLATE_STATEGAME_H
