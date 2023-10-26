#include "Game.h"

Game::Game() : player(playerText, Vector2f(400, 750))
{
    // Initialize other members here if needed
}

void Game::initializeTextures(RenderWindow &window)
{
    playerText = window.loadTexture("C:\\Users\\quinn\\Desktop\\sdl\\PlatformPainter\\res\\pink.jpg");
    player.setTexture(playerText);
}

void Game::run()
{
    // change to handleinput()  render() update()

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
        update();       // level.update
        input();        // level.input
        render(window); // level.render(window)
    }

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
    // level.render(window) -> this method will render the blocks, obsitcles and bg texture of the level.
    window.display();
}
