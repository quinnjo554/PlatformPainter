#include "Player.h"

Player::Player()
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

Player::Player(SDL_Texture *texture, Vector2f pos)
    : texture(texture), pos(pos)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 46;
    currentFrame.h = 64;
}

void Player::handleInput(SDL_Event &event)
{
    float velocity = 0;
    if (event.type == SDL_KEYDOWN) // If a key was pressed
    {
        switch (event.key.keysym.sym) // Check which key was pressed
        {
        case SDLK_LEFT:
            velocity = -7.0f;
            break;
        case SDLK_RIGHT:
            velocity = 7.0f;
            break;
        }
    }
    else if (event.type == SDL_KEYUP) // If a key was released
    {
        switch (event.key.keysym.sym) // Check which key was released
        {
        case SDLK_LEFT:
        case SDLK_RIGHT:
            velocity = 0.0;
            break;
        }
    }
    pos.x += velocity;
}

void Player::setPos(Vector2f pos)
{
    this->pos = pos;
}

Vector2f &Player::getPos()
{
    return this->pos;
}

void Player::setTexture(SDL_Texture *texture)
{
    this->texture = texture;
}

SDL_Rect Player::getCurrentFrame()
{
    return this->currentFrame;
}

SDL_Texture *Player::getTexture()
{
    return this->texture;
}
