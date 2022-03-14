#pragma once

class Player
{
    public:
        Player();
        void Update();
        void Render();
    private:
        int x;
        int y;
        float radius;
};