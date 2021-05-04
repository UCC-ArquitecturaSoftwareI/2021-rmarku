//
// Created by martin on 4/5/21.
//

#ifndef PROJECTTEMAPLATE_STATE_H
#define PROJECTTEMAPLATE_STATE_H

#include "Screen.h"

class Screen;

class State {
protected:
    Screen *screen;

public:
    virtual void events()=0;
    virtual void update()=0;
    virtual void draw()=0;
    virtual ~State();
    void setScreen(Screen *screen);
};

#endif//PROJECTTEMAPLATE_STATE_H
