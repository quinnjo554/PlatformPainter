#include "Portalblock.h"

Portalblock::Portalblock()
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

void Portalblock::move()
{
}

bool Portalblock::checkCollision(SDL_Rect a, SDL_Rect b)
{
    return false;
}

float Portalblock::getGravity()
{
    return 0.0f;
}

Vector2f &Portalblock::getPos()
{
    return pos;
}

SDL_Rect Portalblock::getCurrentFrame()
{
    return SDL_Rect();
}

SDL_Texture *Portalblock::getTexture()
{
    return nullptr;
}
