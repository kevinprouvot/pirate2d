#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H

#include <string>
#include "entity.h"
#include "base.h"

/**
 * Entity Factory
 *
 * Used to create any entity.
 * singleton one.
 */

class EntityFactory {
  public:
    EntityFactory* Instance();

    Entity* createEntity();
  private:
    EntityFactory(){};
    EntityFactory(EntityFactory const&){};
    EntityFactory& operator=(EntityFactory const&){};

    static EntityFactory* _instance;

    std::vector<Entity> _entities;
}

#endif
