#include "player.h"

#include "../include/raylib.h"

void Player::Update()
{
    this->x = GetMouseX();
    this->y = GetMouseY();
}

void Player::Render()
{
    DrawRectangle( this->x, this->y, 100, 200, SKYBLUE );
}