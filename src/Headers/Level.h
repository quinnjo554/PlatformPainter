#pragma once
#include <SDL.h>
#include <iostream>
#include <string.h>
#include "Math.h"
#include "Player.h"
#include "RenderWindow.h"
#include "Sandblock.h"
#include "Stoneblock.h"
#include "Portalblock.h"
#include "Lavablock.h"
#include "vector"
class Level
{
public:
    Level();
    void run();
    void initializeTextures(RenderWindow &window);
    void dropBlock(SDL_Event &event);

private:
    std::vector<SandBlocks> sandBlocks;
    std::vector<StoneBlocks> stoneBlocks;
    std::vector<LavaBlocks> lavaBlocks;
    std::vector<PortalBlocks> portalBlocks;
    // std::vector<Enemy> enemies;      // List of enemies in the level
    // std::vector<Obstacle> obstacles; // List of obstacles in the level
    bool isCompleted;
    Vector2f goalPos; // Position of the goal in the level
    bool isRunning = true;
    SDL_Event event;
    SDL_Texture *playerText;
    SDL_Texture *background;
    Player player;
};
