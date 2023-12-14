#include "Level.h"

Level::Level(Player &player)
    : player(player)
{
}
void Level::run(RenderWindow &window, bool &isRunning)
{

    initializeTextures(window);
    if (!this->getIsCompleted())
    {
        this->input(isRunning);
        this->update();
        this->render(window);
    }
}

void Level::input(bool &isRunning)
{
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false; // change to level complete condition
        setIsCompleted(true);
        break;
    case SDL_MOUSEBUTTONUP:
        setMousePressed(false);
        break;
    case SDL_MOUSEBUTTONDOWN:
        setMousePressed(true);
        break;
    }
    this->player.handleInput(event);
    this->dropBlock();
}

void Level::update()
{
    // check for collisions
    // Game logic
    // Animations
}

void Level::render(RenderWindow &window)
{
    window.screenClear();
    window.renderer(player); // take in a player so we can update score and other things
    window.display();
}

/**
 * init enemies and obstacles
 */
void Level::initializeTextures(RenderWindow &window)
{
}

void Level::dropBlock()
{
    int mouseX, mouseY;
    SDL_GetMouseState(&mouseX, &mouseY);

    if (getIsMousePressed())
    {
        sandBlocks.push_back(std::make_shared<Sandblock>(Vector2f(mouseX, mouseY), playerText));
        std::cout << sandBlocks.size() << "\n";
        std::cout << "Mouse X: " << player.getPos().x << ", Y: " << mouseY << std::endl;
    }
}

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
    return this->lavaBlocks;
}

const std::vector<std::shared_ptr<Portalblock>> &Level::getPortalBlocks()
{
    return this->portalBlocks;
}

bool Level::getIsCompleted()
{
    return this->isCompleted;
}

const Vector2f &Level::getGoalPos()
{
    return this->goalPos;
}

bool Level::getIsMousePressed()
{
    return this->mousePressed;
}

SDL_Texture *Level::getPlayerText()
{
    return this->playerText;
}

SDL_Texture *Level::getBackground()
{
    return this->background;
}

Player &Level::getPlayer()
{
    return this->player;
}

void Level::setSandBlocks(const std::vector<std::shared_ptr<Sandblock>> &blocks)
{
    this->sandBlocks = blocks;
}

void Level::setStoneBlocks(const std::vector<std::shared_ptr<Stoneblock>> &blocks)
{
    this->stoneBlocks = blocks;
}

void Level::setLavaBlocks(const std::vector<std::shared_ptr<Lavablock>> &blocks)
{
    this->lavaBlocks = blocks;
}

void Level::setPortalBlocks(const std::vector<std::shared_ptr<Portalblock>> &blocks)
{
    this->portalBlocks = blocks;
}
void Level::setIsCompleted(bool completed)
{
    this->isCompleted = completed;
}

void Level::setGoalPos(const Vector2f &pos)
{
    this->goalPos = pos;
}

void Level::setPlayerText(SDL_Texture *text)
{
    this->playerText = text;
}

void Level::setBackground(SDL_Texture *bg)
{
    this->background = bg;
}

void Level::setPlayer(const Player &p)
{
    this->player = p;
}

void Level::setMousePressed(bool isPressed)
{
    this->mousePressed = isPressed;
}
