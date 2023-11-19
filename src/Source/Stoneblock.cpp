#include "Stoneblock.h"

Stoneblock::Stoneblock()
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

Vector2f &Stoneblock::getPos()
{
    return this->pos;
}

SDL_Rect Stoneblock::getCurrentFrame()
{
    return this->currentFrame;
}

SDL_Texture *Stoneblock::getTexture()
{
    return this->texture;
}

void Stoneblock::move()
{
}

bool Stoneblock::checkCollision(SDL_Rect a, SDL_Rect b)
{
    return false;
}

float Stoneblock::getGravity()
{
    return 0.0f;
}
