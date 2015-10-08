#ifndef GRAPHICS_H
#define GRAPHICS_H

/* Graphics Class
 * Holds all information dealing with graphics for the game
*/

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
  public:
    Graphics();
    ~Graphics();

  private:
    SDL_Window *_window;
    SDL_Renderer* _renderer;
};

#endif
