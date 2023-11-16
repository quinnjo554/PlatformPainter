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
    return SDL_Rect();
}

SDL_Texture *Stoneblock::getTexture()
{
    return nullptr;
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
