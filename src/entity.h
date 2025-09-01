#ifndef GRAVITYGAME_ENTITY_H
#define GRAVITYGAME_ENTITY_H
#include "structs.h"

#endif //GRAVITYGAME_ENTITY_H

class Entity {
    public:
    //Constructor (you may want a constructor which includes some arguments, like x,y position, texture file, etc.
    Entity();
    //Destructor
    ~Entity();

    //Ordered pairs denoting location and dimensions. Leave null if the entity doesn't need a location or dimension.
    //Alternatively, you may want to eliminate pointers so the structs are stored within the entity itself instead of in separate memory.
    OrderedPair *position;
    OrderedPair *dimensions;

    //Velocity containing direction and magnitude
    Velocity *velocity;
    //denotes if physics is applied to the entity
    bool physicsApplied;

    //Use this or a similar function if you want to have an update function in each entity.
    void update();

    //Include SDL Textures inside the Entity class
};