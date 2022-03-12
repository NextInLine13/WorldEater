#include "game.h"

#include "raylib.h"

int main()
{
    SetTargetFPS(60);

    Game game;
    game.Init( "World Eater", GetScreenWidth(), GetScreenHeight(), true );
    game.Start();
    return 0;
}