#include "pch.h"
#include "Vector.h"


namespace geometry
{

	//Constructors
	Vector2::Vector2() :_x(0.0f), _y(0.0f) {}

	Vector2::Vector2(float x, float y) : _x(x), _y(y) {}

	//Operator Overload
	Vector2 Vector2::operator+(const Vector2& rhs)
	{
		return Vector2(_x + rhs._x, _y + rhs._y);
	}

	Vector2 Vector2::operator-(const Vector2& rhs)
	{
		return Vector2(_x - rhs._x, _y - rhs._y);
	}

	Vector2 Vector2::operator*(const Vector2& rhs)
	{
		return Vector2(_x * rhs._x, _y * rhs._y);
	}

	Vector2 Vector2::operator/(const Vector2& rhs)
	{
		return Vector2(_x / rhs._x, _y / rhs._y);
	}

	// +=, -=, *=, /=

	Vector2 Vector2::operator+=(const Vector2& rhs)
	{

		_x += rhs._x;
		_y = _y + rhs._y;

		return *this;
	}

	Vector2 Vector2::operator-=(const Vector2& rhs)
	{
		_x = _x - rhs._x;
		_y = _y - rhs._y;

		return *this;
	}

	Vector2 Vector2::operator*=(const Vector2& rhs)
	{
		_x = _x * rhs._x;
		_y = _y * rhs._y;

		return *this;
	}

	Vector2 Vector2::operator/=(const Vector2& rhs)
	{
		_x = _x / rhs._x;
		_y = _y / rhs._y;

		return *this;
	}

	// =================      Overload of increment and decrement operators
	//prefixed operator
	Vector2& Vector2::operator++()
	{
		_y++;
		_x++;

		return *this;
	}


	Vector2& Vector2::operator--()
	{
		_y--;
		_x--;

		return *this;
	}

	//posfixed operator
	Vector2 Vector2::operator++(int)
	{

		Vector2 tempVec2 = *this;
		++* this;

		return tempVec2;
	}

	Vector2 Vector2::operator--(int)
	{
		Vector2 tempVec2 = *this;
		--* this;

		return tempVec2;
	}

	bool Vector2::operator==(const Vector2& rhs)
	{

		if (_x == rhs._x && _y == rhs._y)
		{
			return true;
		}

		return false;
	}

	//Access Operator []

	float Vector2::operator[](size_t idx)
	{

		if (idx == 0)
		{
			return _x;
		}
		if (idx == 1)
		{
			return _y;
		}

		std::cout << "\n***Error returning 0.0f by default***\n";
		return 0.0f;

	}

}