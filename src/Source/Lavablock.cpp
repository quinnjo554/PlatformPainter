#include "Lavablock.h"

Lavablock::Lavablock()
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

void Lavablock::move()
{
}

bool Lavablock::checkCollision(SDL_Rect a, SDL_Rect b)
{
    return false;
}

float Lavablock::getGravity()
{
    return 0.0f;
}

Vector2f &Lavablock::getPos()
{
    return pos;
}

SDL_Rect Lavablock::getCurrentFrame()
{
    return SDL_Rect();
}

SDL_Texture *Lavablock::getTexture()
{
    return nullptr;
}
