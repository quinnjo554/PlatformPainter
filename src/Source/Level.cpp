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

const std::vector<SandBlocks> &getSandBlocks() const
{
    return sandBlocks;
}

const std::vector<StoneBlocks> &getStoneBlocks() const
{
    return stoneBlocks;
}

const std::vector<LavaBlocks> &getLavaBlocks() const
{
    return lavaBlocks;
}

const std::vector<PortalBlocks> &getPortalBlocks() const
{
    return portalBlocks;
}

bool getIsCompleted() const
{
    return isCompleted;
}

const Vector2f &getGoalPos() const
{
    return goalPos;
}

bool getIsRunning() const
{
    return isRunning;
}

SDL_Texture *getPlayerText() const
{
    return playerText;
}

SDL_Texture *getBackground() const
{
    return background;
}

const Player &getPlayer() const
{
    return player;
}

// Setters
void setSandBlocks(const std::vector<SandBlocks> &blocks)
{
    sandBlocks = blocks;
}

void setStoneBlocks(const std::vector<StoneBlocks> &blocks)
{
    stoneBlocks = blocks;
}

void setLavaBlocks(const std::vector<LavaBlocks> &blocks)
{
    lavaBlocks = blocks;
}

void setPortalBlocks(const std::vector<PortalBlocks> &blocks)
{
    portalBlocks = blocks;
}

void setIsCompleted(bool completed)
{
    isCompleted = completed;
}

void setGoalPos(const Vector2f &pos)
{
    goalPos = pos;
}

void setIsRunning(bool running)
{
    isRunning = running;
}

void setPlayerText(SDL_Texture *text)
{
    playerText = text;
}

void setBackground(SDL_Texture *bg)
{
    background = bg;
}

void setPlayer(const Player &p)
{
    player = p;
}