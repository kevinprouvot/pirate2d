#ifndef STATE_H
#define STATE_H

#include "entity.h"

//Forward declaration to resolve circular dependencies
class Entity;

class State {
  public:

    State(Entity* ent, float orientation);

    virtual ~State();
};

#endif
