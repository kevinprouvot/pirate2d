#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <memory>
#include <vector>
#include "ai.h"
#include "state.h"
#include "action.h"
#include "physics.h"
#include "render.h"

/**
 * Basic entity
 * An entity contain :
 *  - ai : choose next intend (basicly, input for player, script for bots)
 *  - states : a list of states (example : jumping, collide-left, moving-left, dead)
 *  - actions : a list of available action (example : move-left, attack, fire bullet)
 *  - physics : a physic representation (x position, y position, velocity)
 *  - render : a graphical render
 */

class Entity {
  public:
    Entity();

    /**
     * Construct Entity from a Json file
     * @param file Json information
     */
    Entity(std::string file);

    virtual ~Entity();

  protected:
    Ai ai;
    
    std::vector<State> states;

    std::vector<Action> actions;

    Physics physics;

    Render render;

};

#endif
