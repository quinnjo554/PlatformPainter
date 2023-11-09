#pragma once
#include "Block.h"
#include "SDL.h"
#include "Math.h"
class Sandblock : public Block
{
private:
    SDL_Texture *texture;
    Vector2f pos;
    float gravity;
    SDL_Rect currentFrame;

public:
    Sandblock(Vector2f pos, SDL_Texture *text); // change
    void move() override;
    bool checkCollision(SDL_Rect a, SDL_Rect b) override;
    float getGravity() override;
    Vector2f &getPos() override;
    SDL_Rect getCurrentFrame() override;
    SDL_Texture *getTexture() override;
};