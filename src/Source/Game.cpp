#include "Game.h"

Game::Game() : player(playerText, Vector2f(200, 200)), level(player)
{
    // Initialize other members here if needed
}

void Game::initPlayer(RenderWindow &window)
{
    this->playerText = window.loadTexture("C:\\Users\\quinn\\Desktop\\sdl\\PlatformPainter\\res\\pink.jpg"); // change to relative path
    this->player.setTexture(playerText);
}

// make a menu screen class
// implement framerate
void Game::run()
{
    // game should take care of fps
    // game needs to have the loop
    // think abut trade off's with having obsitcles and enemies tied to Level
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL_INIT HAS FAILED: " << SDL_GetError() << std::endl; // get error returns the last error that has occured
    }
    if (!IMG_Init(IMG_INIT_JPG))
    { // if you want to change file type do it here
        std::cout << "IMG_init HAS FAILED: " << SDL_GetError() << std::endl;
    }
    RenderWindow window("Game", 800, 800);
    initPlayer(window);

    int startTime = SDL_GetTicks();
    int fps = 60;
    int desiredDelta = 1000 / fps;
    while (isRunning)
    {
        level.run(window, isRunning);
        std::cout << desiredDelta << "\n";
        int delta = SDL_GetTicks() - startTime;
        if (delta < desiredDelta)
        {
            SDL_Delay(desiredDelta - delta);
        }
    }
    window.cleanUp();
    SDL_Quit();
}