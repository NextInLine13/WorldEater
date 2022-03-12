#pragma once

#include <string>

class Game
{
public:
    void Init( const std::string& title, int width, int height, bool fullscreen );
    void Start();
};