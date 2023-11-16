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
}

void Level::render(RenderWindow &window)
{
    window.screenClear();
    window.renderer(player); // take in a player so we can update score and other things              // render obstivles and enemies as needed here
    window.display();
}

void Level::initializeTextures(RenderWindow &window)
{
    playerText = window.loadTexture("C:\\Users\\quinn\\Desktop\\sdl\\PlatformPainter\\res\\pink.jpg"); // change to relative path
    this->player.setTexture(playerText);
}

void Level::dropBlock()
{
    int mouseX, mouseY;
    SDL_GetMouseState(&mouseX, &mouseY);

    if (getIsMousePressed() && this->sandBlocks.size() < 50)
    {
        sandBlocks.push_back(std::make_shared<Sandblock>(Vector2f(mouseX, mouseY), playerText));
        std::cout << sandBlocks.size() << "\n";
        std::cout << "Mouse X: " << mouseX << ", Y: " << mouseY << std::endl;
    }
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

bool Level::getIsRunning()
{
    return this->isRunning;
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

// Setters
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

void Level::setIsRunning(bool running)
{
    this->isRunning = running;
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
