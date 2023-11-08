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
    Sandblock();
    virtual void move();
    bool checkCollisian(SDL_Rect a, SDL_Rect b);
    float getGravity();
    Vector2f &getPos();
    SDL_Rect getCurrentFrame() override;
    SDL_Texture *getTexture();
};