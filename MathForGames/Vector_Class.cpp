#include "Vector_Class.h"

//Constructors
geometry::Vector2::Vector2() :_x(0), _y(0) {}

geometry::Vector2::Vector2(float x, float y) : _x(x), _y(y) {}

//Operator Overload
geometry::Vector2 geometry::Vector2::operator+(const Vector2& rhs)
{
	return Vector2(_x + rhs._x, _y + rhs._y);
}

geometry::Vector2 geometry::Vector2::operator-(const Vector2& rhs)
{
	return Vector2(_x - rhs._x, _y - rhs._y);
}

geometry::Vector2 geometry::Vector2::operator*(const Vector2& rhs)
{
	return Vector2(_x * rhs._x, _y * rhs._y);
}

geometry::Vector2 geometry::Vector2::operator/(const Vector2& rhs)
{
	return Vector2(_x / rhs._x, _y / rhs._y);
}

geometry::Vector2 geometry::Vector2::operator+=(const Vector2& rhs)
{
	
	_x += rhs._x;
	_y = _y + rhs._y;

	return *this;
}

geometry::Vector2 geometry::Vector2::operator-=(const Vector2& rhs)
{
	_x = _x - rhs._x;
	_y = _y - rhs._y;

	return *this;
}

geometry::Vector2 geometry::Vector2::operator*=(const Vector2& rhs)
{
	_x = _x * rhs._x;
	_y = _y * rhs._y;

	return *this;
}

geometry::Vector2 geometry::Vector2::operator/=(const Vector2& rhs)
{
	_x = _x / rhs._x;
	_y = _y / rhs._y;

	return *this;
}

// =================      Overload of increment and decrement operators
//prefixed operator
geometry::Vector2& geometry::Vector2::operator++()
{
	_y++;
	_x++;

	return *this;
}


geometry::Vector2& geometry::Vector2::operator--()
{
	_y--;
	_x--;

	return *this;
}

//posfixed operator
geometry::Vector2 geometry::Vector2::operator++(int)
{

	Vector2 tempVec2 = *this;
	++* this;

	return tempVec2;
}

geometry::Vector2 geometry::Vector2::operator--(int)
{
	Vector2 tempVec2 = *this;
	--* this;

	return tempVec2;
}

bool geometry::Vector2::operator==(const Vector2& rhs)
{

	if (_x == rhs._x && _y == rhs._y)
	{
		return true;
	}

	return false;
}

float geometry::Vector2::operator[](size_t idx)
{

	if (idx == 0)
	{
		return _x;
	}
	if (idx == 1)
	{
		return _y;
	}

	if (idx < 0 || idx >1)
	{
		std::cout << "Error returning 0.0f by default";
		return 0.0f;
	}

}

//Print
void geometry::Vector2::PrintVector2()
{
	std::cout << "(" << _x << "," << _y << ")" << std::endl;
}

