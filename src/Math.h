#pragma once

#include <cmath>

namespace Math {

    class Vector2
    {
    public:
        Vector2();
        Vector2( float x, float y );

        Vector2 operator - ( const Vector2& other );

        Vector2 operator + ( const Vector2& other );

        Vector2 operator * ( const float scalar );

        Vector2 operator / ( const float scalar );

        float Magnitude();

        float x;
        float y;
    };

    Vector2 MoveTowards( Vector2 current, Vector2 target, float step );
} // namespace::Math
