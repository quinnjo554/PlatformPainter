
#pragma once
#include <SDL.h>
#include <iostream>
#include "RenderWindow.h"
#include <string.h>

class Game
{
public:
    void run();
    Game();

private:
    bool isRunning = true;
    SDL_Event event;
    SDL_Texture *playerText;
    SDL_Texture *background;
    void initializeTextures(RenderWindow &window);
};
