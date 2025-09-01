#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include "entity.h"
#include "physics.h"
#include <iostream>

// constants
const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;


int main(int argc, char* argv[]) {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << "SDL Init failed: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Gravity Demo with Sprite", WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);

    // spawn an entity which represents a static platform. Use the brick texture provided in the media directory


    bool running = true;
    SDL_Event e;

    while (running) {
        // Event handling
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
        }

        // Read input from input manager

        // Spawn a box that falls onto the static platform based on keyboard input
        // You'll need to detect and handle collisions as well


        // Rendering
        SDL_SetRenderDrawColor(renderer, 30, 30, 30, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }

    //make sure to clean up your objects here.

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
