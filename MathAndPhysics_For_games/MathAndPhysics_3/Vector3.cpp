#include "pch.h"
#include "Vector.h"

namespace geometry
{

    //Constructors
    geometry::Vector3::Vector3() :_x(0.0f), _y(0.0f), _z(0.0f) {}
    geometry::Vector3::Vector3(float x, float y, float z) : _x(x), _y(y), _z(z) {}

    //Operator Overload
    geometry::Vector3 geometry::Vector3::operator+(const Vector3& rhs)
    {
        return Vector3(_x + rhs._x, _y + rhs._y, _z + rhs._z);
    }// +

    geometry::Vector3 geometry::Vector3::operator-(const Vector3& rhs)
    {
        return Vector3(_x - rhs._x, _y - rhs._y, _z - rhs._z);
    }// -

    geometry::Vector3 geometry::Vector3::operator*(const Vector3& rhs)
    {
        return Vector3(_x * rhs._x, _y * rhs._y, _z * rhs._z);
    }// *

    geometry::Vector3 geometry::Vector3::operator/(const Vector3& rhs)
    {
        return Vector3(_x / rhs._x, _y / rhs._y, _z / rhs._z);;
    }// /

    // +=, -=, *=, /=

    geometry::Vector3 geometry::Vector3::operator+=(const Vector3& rhs)
    {

        _x += rhs._x;
        _y = _y + rhs._y;
        _z = _z + rhs._z;

        return *this;
    } // +=

    geometry::Vector3 geometry::Vector3::operator-=(const Vector3& rhs)
    {
        _x -= rhs._x;
        _y = _y - rhs._y;
        _z = _z - rhs._z;

        return *this;
    } // -=

    geometry::Vector3 geometry::Vector3::operator*=(const Vector3& rhs)
    {
        _x *= rhs._x;
        _y = _y * rhs._y;
        _z = _z * rhs._z;

        return *this;
    }// *=

    geometry::Vector3 geometry::Vector3::operator/=(const Vector3& rhs)
    {
        _x /= rhs._x;
        _y = _y / rhs._y;
        _z = _z / rhs._z;

        return *this;
    }// /=

    // =================   Overload of increment and decrement operators
    //prefixed operator

    geometry::Vector3& geometry::Vector3::operator++()
    {
        _y++;
        _x++;
        _z++;

        return *this;
    }


    geometry::Vector3& geometry::Vector3::operator--()
    {
        _y--;
        _x--;
        _z--;

        return *this;
    }

    //posfixed operator
    geometry::Vector3 geometry::Vector3::operator++(int)
    {

        Vector3 tempVec3 = *this;
        ++* this;

        return tempVec3;
    }

    geometry::Vector3 geometry::Vector3::operator--(int)
    {
        Vector3 tempVec3 = *this;
        --* this;

        return tempVec3;
    }

    // operator==

    bool geometry::Vector3::operator==(const Vector3& rhs)
    {

        if (_x == rhs._x && _y == rhs._y && _z == rhs._z)
        {
            return true;
        }

        return false;
    }

    // operator []

    float geometry::Vector3::operator[](size_t idx)
    {

        if (idx == 0)//x
        {
            return _x;

        }
        else if (idx == 1)//y
        {
            return _y;

        }
        else if (idx == 2)//z
        {
            return _z;
        }

       
        std::cout << "Error returning 0.0f by default";
        return 0.0f;
        

    }

}