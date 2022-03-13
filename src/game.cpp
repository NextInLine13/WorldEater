#include "game.h"
#include "player.h"

#include "raylib.h"

#include "Math.h"

void Game::Init( const std::string& title, int width, int height, bool fullscreen )
{
    InitWindow( width, height, title.c_str() );
    if( fullscreen && !IsWindowFullscreen() )
    {
        ToggleFullscreen();
    }
}

void Game::Start()
{
    Player player;
    while( !WindowShouldClose() )
    {
        player.Update();

        BeginDrawing();
        ClearBackground( DARKGREEN );
        player.Render();        
        EndDrawing();

    }
}
