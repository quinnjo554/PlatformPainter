#include "Block.h"
#include "SDL.h"
#include "Math.h"
class Portalblock : public Block
{
private:
    SDL_Texture *texture;
    Vector2f pos;
    float gravity;
    SDL_Rect currentFrame;

public:
    Portalblock();
    virtual void move();
    bool checkCollisian(SDL_Rect a, SDL_Rect b);
    float getGravity();
    Vector2f &getPos();
    SDL_Rect getCurrentFrame();
    SDL_Texture *getTexture();
};