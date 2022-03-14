#include "game.h"
#include "game_object.h"
#include "player.h"

#include "Math.h"

#include "raylib.h"
#include <memory>

void Game::Init( const std::string& title, int width, int height, bool fullscreen )
{
    InitWindow( width, height, title.c_str() );
    HideCursor();
    if( fullscreen && !IsWindowFullscreen() )
    {
        ToggleFullscreen();
    }
}

void Game::Start()
{
    std::unique_ptr< GameObject > player = std::make_unique< Player >();
    while( !WindowShouldClose() )
    {
        player->Update();

        BeginDrawing();
        ClearBackground( DARKGREEN );
        player->Render();
        EndDrawing();
    }
}
