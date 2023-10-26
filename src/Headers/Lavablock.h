#include "Block.h"
#include "SDL.h"
#include "Math.h"
class Lavablock : public Block
{
public:
    virtual void handleInput(SDL_Event &event) = 0;
    virtual Vector2f &getPos() = 0;
    virtual SDL_Rect getCurrentFrame() = 0;
    virtual SDL_Texture *getTexture() = 0;
}