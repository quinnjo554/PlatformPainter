#pragma once // makes sure stuff doesnt get copied multiple times
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "Entity.h"
#include "Player.h"
#include <SDL.h>

class RenderWindow
{

public:
    RenderWindow(const char *p_title, int p_w, int p_h);

    RenderWindow();

    int getRefreshRate();

    SDL_Texture *loadTexture(const char *p_pathFile);
    void screenClear();

    void renderer(Entity &e);
    void display();

    SDL_Window *getWindow();

    void cleanUp();
    SDL_Renderer *getRender();

private:
    // init window and render
    SDL_Window *window = NULL;
    SDL_Renderer *render = NULL;
};
