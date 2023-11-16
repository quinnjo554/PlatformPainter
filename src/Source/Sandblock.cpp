#include "Sandblock.h"
Sandblock::Sandblock(Vector2f pos, SDL_Texture *text)
{
    this->pos = pos;
    this->texture = text;
    gravity = 0;

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
    return currentFrame;
}

SDL_Texture *Sandblock::getTexture()
{
    return texture;
}
