#pragma once

#include "game_object.h"

class Player : public GameObject
{
    public:
        Player();
        void Update() override;
        void Render() override;
    private:
        int x;
        int y;
        float radius;
};