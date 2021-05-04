#include "classes/Player.h"
#include "classes/Screen.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

int main() {
    Screen pantalla;

    while (pantalla.isOpen()) {
        pantalla.events();
        pantalla.update();
        pantalla.draw();
    }
    return 0;
}
