#include "Sandblock.h"
Sandblock::Sandblock()
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

void Sandblock::move()
{
}

bool Sandblock::checkCollision(SDL_Rect a, SDL_Rect b)
{
    return false;
}

float Sandblock::getGravity()
{
    return 0.0f;
}

Vector2f &Sandblock::getPos()
{
    return pos;
}

SDL_Rect Sandblock::getCurrentFrame()
{
    return SDL_Rect();
}

SDL_Texture *Sandblock::getTexture()
{
    return nullptr;
}
