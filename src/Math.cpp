#include "Math.h"
#include <cmath>


namespace Math {
    Vector2::Vector2() : x( 0.0 ), y( 0.0 ) {}

    Vector2::Vector2( float x, float y ) : x( x ), y( y ) {}

    Vector2 Vector2::operator - ( const Vector2& other )
    {
        Vector2 result;
        result.x = x - other.x;
        result.y = y - other.y;
        return result;
    }

    Vector2 Vector2::operator + ( const Vector2& other )
    {
        Vector2 result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    Vector2 Vector2::operator * ( const float scalar )
    {
        Vector2 result;
        result.x = x * scalar;
        result.y = y * scalar;
        return result;
    }

    Vector2 Vector2::operator / ( const float scalar )
    {
        Vector2 result;
        result.x = x / scalar;
        result.y = y / scalar;
        return result;
    }

    float Vector2::Magnitude()
    {
        return std::sqrt( x*x + y*y );
    }
    
    float x;
    float y;

    Vector2 MoveTowards( Vector2 current, Vector2 target, float step )
    {
        Math::Vector2 dif = target - current;
        float magnitude = dif.Magnitude();
        if( magnitude <= step || magnitude == 0 )
        {
            return target;
        }
        return current + dif / magnitude * step;
    } 
} // namespace::Math
