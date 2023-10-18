#include "Game.h"

Game::Game() : player(playerText, Vector2f(400, 750))
{
    // Initialize other members here if needed
}

void Game::initializeTextures(RenderWindow &window)
{
    playerText = window.loadTexture("C:\\Users\\quinn\\Desktop\\sdl\\PlatformPainter\\res\\pink.jpg");
    // background = window.loadTexture("C:\\Users\\quinn\\source\\repos\\UnderstandingSDL\\GFX\\background.png");
    player.setTexture(playerText);
}

void Game::run()
{

    if (SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        std::cout << "SDL_INIT HAS FAILED: " << SDL_GetError() << std::endl; // get error returns the last error that has occured
    }
    if (!IMG_Init(IMG_INIT_JPG))
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
            player.handleInput(event);
        }
        window.screenClear();
        window.renderer(player);
        window.display();
    }

    window.cleanUp();
    SDL_Quit();
}
