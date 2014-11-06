#ifndef STATE_H
#define STATE_H

#include "base.h"


class State {
  public:

    State(Entity* ent, float orientation);

    virtual ~State();
};

#endif
