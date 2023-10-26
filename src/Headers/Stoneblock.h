#include "Block.h"
#include "SDL.h"
#include "Math.h"
class Stoneblock : public Block
{
private:
    SDL_Texture *texture;
    Vector2f pos;
    SDL_Rect float gravity;

public:
    SandBlock();
    SDL_Texture *getTexture();
    void move();
    bool checkCollision(SDL_Rect a, SDL_Rect b);
    float getGravity();
    Vector2f &getPos();
    SDL_Rect getCurrentFrame();
    SDL_Texture *getTexture();
}