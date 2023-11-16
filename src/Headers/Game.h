
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
    void update();
    void input();
    void render(RenderWindow &window);
    Game();

private:
    bool isRunning = true;
    SDL_Event event;
    SDL_Texture *playerText;
    Player player;
    Level level;
    void initializePlayer(RenderWindow &window);
    // add score board and ui
};
