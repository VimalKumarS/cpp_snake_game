//
// Created by Vimal Kumar on 3/18/22.
//

#ifndef SDL2TEST_AI_H
#define SDL2TEST_AI_H
#include "snake.h"
#include "SDL.h"

class AI {
public:
    AI(Snake* snake, const SDL_Point* food);
    ~AI();
    void AutoPlay();

private:
    Snake* snake;
    const SDL_Point* food;
};


#endif //SDL2TEST_AI_H
