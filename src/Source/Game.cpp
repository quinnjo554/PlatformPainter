#include "Game.h"

Game::Game()
{
    // Initialize other members here if needed
}

void Game::initializeTextures(RenderWindow &window)
{
    //   playerText = window.loadTexture("C:\\Users\\quinn\\source\\repos\\UnderstandingSDL\\GFX\\orangeBlock.png");
    // background = window.loadTexture("C:\\Users\\quinn\\source\\repos\\UnderstandingSDL\\GFX\\background.png");

    // player.setTexture(playerText);
}

void Game::run()
{

    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL_INIT HAS FAILED: " << SDL_GetError() << std::endl; // get error returns the last error that has occured
    }
    if (!IMG_Init(IMG_INIT_PNG))
    { // if you want to change file type do it here
        std::cout << "IMG_init HAS FAILED: " << SDL_GetError() << std::endl;
    }
    RenderWindow window("Game", 800, 800);
    initializeTextures(window);

    while (isRunning)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                isRunning = false;
            }
        }
        window.screenClear();
        window.display();
    }

    window.cleanUp();
    SDL_Quit();
}
