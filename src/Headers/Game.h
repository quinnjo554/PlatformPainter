
#pragma once
#include <SDL.h>
#include <iostream>
#include <string.h>
#include "Math.h"
#include "Player.h"
#include "RenderWindow.h"
#include "Level.h"
class Game
{
public:
    void run();
    Game();

private:
    bool isRunning = true;
    SDL_Event event;
    SDL_Texture *playerText;
    Level level;
    Player player;
    // add score board and ui
};
