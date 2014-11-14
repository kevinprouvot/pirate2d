#ifndef PHYSICS_H
#define PHYSICS_H

#include "base.h"

class Physics {
  public:
    Physics(Entity *entity);

    ~Physics();

    void update();

  private:
    Rectf *box_;

};

#endif
