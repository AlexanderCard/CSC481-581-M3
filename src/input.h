#ifndef GRAVITYGAME_INPUT_H
#define GRAVITYGAME_INPUT_H

#endif //GRAVITYGAME_INPUT_H

class inputHandler {
    public:
    inputHandler();
    ~inputHandler();

    //Use these functions, or similar functions, to provide abstract remappable keyboard input
    //Create Key IDs, which allow you to call keyPressed using an abstract game concept (e.g. left) instead of the key itself in the game
    //In this input handler, you'll need to convert the abstract game concept to the physical key you poll from SDL_GetKeyboardState
    //Returns the boolean received from SDL_GetKeyboardState
    bool keyPressed(int key);
    bool keyReleased(int key);
};