#include "game.h"
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
    gameObjects.emplace_back( std::make_unique< Player >() );
    while( !WindowShouldClose() )
    {
        Update();
        Render();
    }
}

void Game::Update()
{
    for ( auto& gameObject : gameObjects )
    {
        gameObject->Update();
    }
}

void Game::Render()
{
    BeginDrawing();

        ClearBackground( DARKGREEN );
        for ( auto& gameObject : gameObjects )
        {
            gameObject->Render();
        }

    EndDrawing();
}
