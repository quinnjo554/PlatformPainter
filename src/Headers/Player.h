#pragma once
#include <SDL.h>
#include <iostream>
#include <string.h>
#include "RenderWindow.h"
#include "Entity.h"
#include "Math.h"

class Player : public Entity
{
private:
    SDL_Texture *texture;
    Vector2f pos;
    SDL_Rect currentFrame;

public:
    Player();
    Player(SDL_Texture *texture, Vector2f pos);
    void handleInput(SDL_Event &event);
    void setPos(Vector2f pos);
    Vector2f &getPos();
    void setTexture(SDL_Texture *texture);
    SDL_Rect getCurrentFrame();
    SDL_Texture *getTexture();
};