#ifndef GRAVITYGAME_PHYSICS_H
#define GRAVITYGAME_PHYSICS_H

#endif //GRAVITYGAME_PHYSICS_H

class Physics {
    public:

    //Use these functions to set and get the gravity variable to apply to entities
    static void setGravity(const int gravity) {gravityWeight = gravity;};
    static int getGravity() {return gravityWeight;};

    private:
    static int gravityWeight;
};