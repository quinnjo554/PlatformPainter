#include "Level.h"

Level::Level()
    : player(playerText, Vector2f(400, 750))
{
}

void Level::run(RenderWindow &window)
{
    initializeTextures(window);
    while (isRunning)
    {
        this->input();
        this->update();
        this->render(window);
    }
}

void Level::input()
{
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;
    }
    this->player.handleInput(event);
    this->dropBlock(event);
}

void Level::update()
{
}

void Level::render(RenderWindow &window)
{
    window.screenClear();
    window.renderer(player); // take in a player so we can update score and other things
    // render obstivles and enemies as needed here
    window.display();
}

void Level::initializeTextures(RenderWindow &window)
{
    playerText = window.loadTexture("C:\\Users\\quinn\\Desktop\\sdl\\PlatformPainter\\res\\pink.jpg");
    player.setTexture(playerText);
}

void Level::dropBlock(SDL_Event &event)
{
    int mouseX, mouseY;
    SDL_GetMouseState(&mouseX, &mouseY);

    // Do something with mouseX and mouseY, for example, print them
    std::cout << "Mouse X: " << mouseX << ", Y: " << mouseY << std::endl;
}
// Getters
const std::vector<std::shared_ptr<Sandblock>> &Level::getSandBlocks()
{
    return this->sandBlocks;
}

const std::vector<std::shared_ptr<Stoneblock>> &Level::getStoneBlocks()
{
    return this->stoneBlocks;
}

const std::vector<std::shared_ptr<Lavablock>> &Level::getLavaBlocks()
{
    return lavaBlocks;
}

const std::vector<std::shared_ptr<Portalblock>> &Level::getPortalBlocks()
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
void Level::setSandBlocks(const std::vector<std::shared_ptr<Sandblock>> &blocks)
{
    sandBlocks = blocks;
}

void Level::setStoneBlocks(const std::vector<std::shared_ptr<Stoneblock>> &blocks)
{
    stoneBlocks = blocks;
}

void Level::setLavaBlocks(const std::vector<std::shared_ptr<Lavablock>> &blocks)
{
    lavaBlocks = blocks;
}

void Level::setPortalBlocks(const std::vector<std::shared_ptr<Portalblock>> &blocks)
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
