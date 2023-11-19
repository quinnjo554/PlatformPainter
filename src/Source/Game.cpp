#include "Game.h"

Game::Game()
{
    // Initialize other members here if needed
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
    // if start game is selected
    while (isRunning)
    {
        // check for quit input
        // init Level with a overall gave scope Player
        level.run(window);
    }
    window.cleanUp();
    SDL_Quit();
}
