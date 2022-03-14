#pragma once

#include "game_object.h"

#include <string>
#include <vector>
#include <memory>

class Game
{
    public:
        void Init( const std::string& title, int width, int height, bool fullscreen );
        void Start();

    private:
        void Update();
        void Render();

        std::vector< std::unique_ptr< GameObject > > gameObjects;
};