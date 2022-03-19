//
// Created by Vimal Kumar on 3/18/22.
//

#include <iostream>
#include "AI.h"

AI::AI(Snake* snake, const SDL_Point* food) : snake(snake), food(food){
    std::cout << "AI's Constructor called.\n";
};

AI::~AI() {
    std::cout << "AI's Destructor called.\n";
}

void AI::AutoPlay() {
    int x=  static_cast<int>(snake->head_x);
    int y= static_cast<int>(snake->head_y);

    if (x != food->x && y != food->y) return;
    if (x == food->x && y == food->y) return;

//    SDL_Event sdlevent;
//    sdlevent.type = SDL_KEYDOWN;

    if (x == food->x){
            if(y>food->y){
//                sdlevent.key.keysym.sym = SDLK_UP;
                snake->direction = Snake::Direction::kUp;
            }else{
//                sdlevent.key.keysym.sym = SDLK_DOWN;
                snake->direction = Snake::Direction::kDown;
            }
    }
    else {
        if(x>food->x){
//            sdlevent.key.keysym.sym = SDLK_LEFT;
            snake->direction = Snake::Direction::kLeft;
        }else{
//            sdlevent.key.keysym.sym = SDLK_RIGHT;
            snake->direction = Snake::Direction::kRight;
        }
    }

//    SDL_PushEvent(&sdlevent);
}