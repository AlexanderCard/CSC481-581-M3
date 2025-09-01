#ifndef GRAVITYGAME_STRUCTS_H
#define GRAVITYGAME_STRUCTS_H

#endif //GRAVITYGAME_STRUCTS_H

//General purpose struct for ordered pairs for readability and simplicity
struct OrderedPair {
    float x;
    float y;
};

//Struct for simplicity
struct Velocity {
    OrderedPair direction;
    float magnitude;
};