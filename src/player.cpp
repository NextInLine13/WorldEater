#include "player.h"

#include "../include/raylib.h"

Player::Player() : x( 0 ), y( 0 ), radius( 10 ) {}

void Player::Update()
{
    this->x = GetMouseX();
    this->y = GetMouseY();
}

void Player::Render()
{
    DrawCircle( this->x, this->y, this->radius, SKYBLUE );
}