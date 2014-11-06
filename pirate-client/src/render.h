#ifndef RENDER_H
#define RENDER_H

#include <SDL.h>
#include "base.h"

class Render {
  public:
    Render(Entity *entity);

    ~Render();

  private:
    SDL_Texture *texture = nullptr;
};

#endif
