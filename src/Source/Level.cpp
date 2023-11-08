#include "Level.h"

void Level::run()
{
}

Level::Level()
{
}

void Level::initializeTextures(RenderWindow &window)
{
}

void Level::dropBlock(SDL_Event &event)
{
    int mouseX, mouseY;
    SDL_GetMouseState(&mouseX, &mouseY);

    // Do something with mouseX and mouseY, for example, print them
    std::cout << "Mouse X: " << mouseX << ", Y: " << mouseY << std::endl;
}
// Getters
std::vector<Sandblock> &Level::getSandBlocks()
{
    return this->sandBlocks;
}

const std::vector<Stoneblock> &Level::getStoneBlocks()
{
    return this->stoneBlocks;
}

const std::vector<Lavablock> &Level::getLavaBlocks()
{
    return lavaBlocks;
}

const std::vector<Portalblock> &Level::getPortalBlocks()
{
    return portalBlocks;
}

bool Level::getIsCompleted()
{
    return isCompleted;
}

const Vector2f &Level::getGoalPos()
{
    return goalPos;
}

bool Level::getIsRunning()
{
    return isRunning;
}

SDL_Texture *Level::getPlayerText()
{
    return playerText;
}

SDL_Texture *Level::getBackground()
{
    return background;
}

const Player &Level::getPlayer()
{
    return player;
}

// Setters
void Level::setSandBlocks(const std::vector<Sandblock> &blocks)
{
    sandBlocks = blocks;
}

void Level::setStoneBlocks(const std::vector<Stoneblock> &blocks)
{
    stoneBlocks = blocks;
}

void Level::setLavaBlocks(const std::vector<Lavablock> &blocks)
{
    lavaBlocks = blocks;
}

void Level::setPortalBlocks(const std::vector<Portalblock> &blocks)
{
    portalBlocks = blocks;
}

void Level::setIsCompleted(bool completed)
{
    isCompleted = completed;
}

void Level::setGoalPos(const Vector2f &pos)
{
    goalPos = pos;
}

void Level::setIsRunning(bool running)
{
    isRunning = running;
}

void Level::setPlayerText(SDL_Texture *text)
{
    playerText = text;
}

void Level::setBackground(SDL_Texture *bg)
{
    background = bg;
}

void Level::setPlayer(const Player &p)
{
    player = p;
}
