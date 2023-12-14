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
    Level(Player &player);
    void run(RenderWindow &window, bool &isRunning);
    void input(bool &isRunning);
    void update();
    void render(RenderWindow &window);
    void initializeTextures(RenderWindow &window);
    void dropBlock();
    // Getters
    const std::vector<std::shared_ptr<Sandblock>> &getSandBlocks();
    const std::vector<std::shared_ptr<Stoneblock>> &getStoneBlocks();
    const std::vector<std::shared_ptr<Lavablock>> &getLavaBlocks();
    const std::vector<std::shared_ptr<Portalblock>> &getPortalBlocks();
    bool getIsCompleted();
    const Vector2f &getGoalPos();
    bool getIsMousePressed();
    SDL_Texture *getPlayerText();
    SDL_Texture *getBackground();
    Player &getPlayer();

    // Setters
    void setSandBlocks(const std::vector<std::shared_ptr<Sandblock>> &blocks);
    void setStoneBlocks(const std::vector<std::shared_ptr<Stoneblock>> &blocks);
    void setLavaBlocks(const std::vector<std::shared_ptr<Lavablock>> &blocks);
    void setPortalBlocks(const std::vector<std::shared_ptr<Portalblock>> &blocks);
    void setIsCompleted(bool completed);
    void setGoalPos(const Vector2f &pos);
    void setPlayerText(SDL_Texture *text);
    void setBackground(SDL_Texture *bg);
    void setPlayer(const Player &p);
    void setMousePressed(bool isPressed);

private:
    Player &player;
    std::vector<std::shared_ptr<Sandblock>> sandBlocks;
    std::vector<std::shared_ptr<Stoneblock>> stoneBlocks;
    std::vector<std::shared_ptr<Lavablock>> lavaBlocks;
    std::vector<std::shared_ptr<Portalblock>> portalBlocks;
    // std::vector<Enemy> enemies;      // List of enemies in the level
    // std::vector<Obstacle> obstacles; // List of obstacles in the level
    bool isCompleted = false;
    bool mousePressed = false;
    Vector2f goalPos; // Position of the goal in the level
    SDL_Event event;
    SDL_Event playerEvent;
    SDL_Texture *playerText;
    SDL_Texture *background;
};
