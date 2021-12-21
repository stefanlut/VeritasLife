#include <iostream>
#include "../include/Player.h"
#include "../include/Character.h"
#include "../include/GameCommand.h"
#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include <string>
#include <cstdlib>
using std::endl, std::cout;

enum GAMESCREEN
{
    LOGO = 0,
    TITLE,
    GAMEPLAY
};
int main(int argc, char ** argv)
{
    GAMESCREEN currentscreen  = LOGO;
    int *screenWidthptr;
    int *screenHeightptr;
    if(argc == 3)
    {
        for(int j = 1; j < argc; j++)
        {
            for(int i = 0; i < strlen(argv[j]); i++)
            {
                if(!isdigit(*(*(argv+j)+i)))
                {
                    printf("Input dimensions is not a number\n");
                    exit(1);
                }
            }
        }
        *screenWidthptr = atoi(argv[1]);
        *screenHeightptr = atoi(argv[2]);
    }
    else
    {
        *screenWidthptr = 800;
        *screenHeightptr = 450;
    }
    const int screenWidth = *screenWidthptr;
    const int screenHeight = *screenHeightptr;
    int frameCounter = 0;

    InitWindow(screenWidth, screenHeight, "Title of Game");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        switch(currentscreen)
        {
            case LOGO:
            {
                (frameCounter > 300) ? currentscreen = LOGO : frameCounter++;
            } break;
            case TITLE:
            {

            }break;
            case GAMEPLAY:
            {

            }break;
        }
        BeginDrawing();
            switch(currentscreen)
            {
                case LOGO:
                {

                }break;
                case TITLE:
                {
                    
                }break;
                case GAMEPLAY:
                {

                }break;
            }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}