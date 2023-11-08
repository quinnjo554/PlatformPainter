#pragma once
#include <iostream>
#include <SDL.h>
#include "Math.h"

class Block
{
public:
    virtual void move() = 0;
    virtual bool checkCollision(SDL_Rect a, SDL_Rect b) = 0;
    virtual float getGravity() = 0;
    virtual Vector2f &getPos() = 0;
    virtual SDL_Rect getCurrentFrame() = 0;
    virtual SDL_Texture *getTexture() = 0;
};