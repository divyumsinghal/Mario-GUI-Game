#include "Game.hpp"
// #include <SDL.h>
#include "TextureManager.h"


Game* game = nullptr;

int main(int argc, char* argv[]) {

    const int FPS = 60;

    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;


   
    game = new Game();

    game->init("MyGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->running()) {

        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        // frameEnd = SDL_GetTicks();
  
        frameTime = SDL_GetTicks() - frameStart;

       if (frameDelay > frameTime) {

            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();
      
    return 0;
}