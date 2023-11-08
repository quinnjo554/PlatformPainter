#include "Block.h"
#include "SDL.h"
#include "Math.h"
class Lavablock : public Block
{
private:
    SDL_Texture *texture;
    Vector2f pos;
    float gravity;
    SDL_Rect currentFrame;

public:
    Lavablock();
    void move() override;
    bool checkCollision(SDL_Rect a, SDL_Rect b) override;
    float getGravity() override;
    Vector2f &getPos() override;
    SDL_Rect getCurrentFrame() override;
    SDL_Texture *getTexture() override;
};