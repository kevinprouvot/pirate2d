#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include "res_path.h"
#include "cleanup.h"

int main()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
    std::cout << "SDL_Init ERROR: " << SDL_GetError() << std::endl;
    return 1;
  }
  std::cout << "Resource path is: " << getResourcePath() << std::endl;

  SDL_Window *win = SDL_CreateWindow("Hello World", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
  if (win == nullptr){
    std::cout << "SDL_CreatingWindow Error: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return 1;
  }

  SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (ren == nullptr){
    cleanup(win);
    std::cout << "SDL_CreateRendere Error: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return 1;
  } 

  SDL_Quit();
  return 0;
}
