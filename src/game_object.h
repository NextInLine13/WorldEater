#pragma once

class GameObject
{
    public:
        virtual void Update() = 0;
        virtual void Render() = 0;
};