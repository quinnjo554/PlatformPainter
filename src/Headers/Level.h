#pragma once
#include <SDL.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <memory>
#include "Math.h"
#include "Player.h"
#include "RenderWindow.h"
#include "Sandblock.h"
#include "Stoneblock.h"
#include "Portalblock.h"
#include "Lavablock.h"

class Level
{
public:
    Level();
    void run();
    void initializeTextures(RenderWindow &window);
    void dropBlock(SDL_Event &event);

    // Getters
    const std::vector<std::shared_ptr<Sandblock>> &getSandBlocks();
    const std::vector<std::shared_ptr<Stoneblock>> &getStoneBlocks();
    const std::vector<std::shared_ptr<Lavablock>> &getLavaBlocks();
    const std::vector<std::shared_ptr<Portalblock>> &getPortalBlocks();
    bool getIsCompleted();
    const Vector2f &getGoalPos();
    bool getIsRunning();
    SDL_Texture *getPlayerText();
    SDL_Texture *getBackground();
    const Player &getPlayer();

    // Setters
    void setSandBlocks(const std::vector<std::shared_ptr<Sandblock>> &blocks);
    void setStoneBlocks(const std::vector<std::shared_ptr<Stoneblock>> &blocks);
    void setLavaBlocks(const std::vector<std::shared_ptr<Lavablock>> &blocks);
    void setPortalBlocks(const std::vector<std::shared_ptr<Portalblock>> &blocks);
    void setIsCompleted(bool completed);
    void setGoalPos(const Vector2f &pos);
    void setIsRunning(bool running);
    void setPlayerText(SDL_Texture *text);
    void setBackground(SDL_Texture *bg);
    void setPlayer(const Player &p);

private:
    std::vector<std::shared_ptr<Sandblock>> sandBlocks;
    std::vector<std::shared_ptr<Stoneblock>> stoneBlocks;
    std::vector<std::shared_ptr<Lavablock>> lavaBlocks;
    std::vector<std::shared_ptr<Portalblock>> portalBlocks;
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
