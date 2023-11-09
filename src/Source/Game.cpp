#include "Game.h"

Game::Game() : player(playerText, Vector2f(400, 750))
{
    // Initialize other members here if needed
}

// make a menu screen class

void Game::run()
{
    player.setPos(Vector2f(100, 100));
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL_INIT HAS FAILED: " << SDL_GetError() << std::endl; // get error returns the last error that has occured
    }
    if (!IMG_Init(IMG_INIT_JPG))
    { // if you want to change file type do it here
        std::cout << "IMG_init HAS FAILED: " << SDL_GetError() << std::endl;
    }
    RenderWindow window("Game", 900, 900);
    // if start game is selected

    level.run(window);
    window.cleanUp();
    SDL_Quit();
}

void Game::update()
{
}

void Game::input()
{
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;
    }
    player.handleInput(event);
}

void Game::render(RenderWindow &window)
{
    window.screenClear();
    window.renderer(player);
    level.render(window);
    window.display();
}
