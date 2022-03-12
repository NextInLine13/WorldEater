#include "game.h"

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
    Math::Vector2 recPosition = { 50, 50 };
    Math::Vector2 destPosition = recPosition;

    while( !WindowShouldClose() )
    {
        if( IsMouseButtonPressed( MOUSE_BUTTON_LEFT ) )
        {
            int x = GetMouseX();
            int y = GetMouseY();
            destPosition = { x, y };
        }


        BeginDrawing();
        ClearBackground( DARKGREEN );
        DrawRectangle( recPosition.x, recPosition.y, 100, 200, SKYBLUE );
        EndDrawing();
        recPosition = Math::MoveTowards( recPosition, destPosition, 3 );
    }
}
