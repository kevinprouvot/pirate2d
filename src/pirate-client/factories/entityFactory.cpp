#include "entityFactory.h"

EntityFactory() {
  _entities = new vector<Entity>();  
}

EntityFactory* EntityFactory::Instance() {
  if(_instance){
    _instance = new EntityFactory();
  }
  return instance;
}

Entity* EntityFactory::createEntity() {
  Entity* ent = new Entity();
  _entities.insert(ent);
  return ent;
}


