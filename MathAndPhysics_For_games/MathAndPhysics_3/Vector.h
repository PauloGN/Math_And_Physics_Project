#pragma once
#include <iostream>


namespace geometry
{

class Vector2
{

public:

	//constructors
	Vector2();
	Vector2(float x, float y);

	// Define accessor functions.
	const float x() const { return _x; }
	const float y() const { return _y; }

	// operator overloads
	Vector2 operator+(const Vector2& rhs);
	Vector2 operator-(const Vector2& rhs);
	Vector2 operator*(const Vector2& rhs);
	Vector2 operator/(const Vector2& rhs);
	Vector2 operator+=(const Vector2& rhs);
	Vector2 operator-=(const Vector2& rhs);
	Vector2 operator*=(const Vector2& rhs);
	Vector2 operator/=(const Vector2& rhs);
	//prefixed operator
	Vector2& operator++();
	Vector2& operator--();
	//posfixed operator
	Vector2 operator++(int);
	Vector2 operator--(int);
	//Operator overload ==
	bool operator==(const Vector2& rhs);
	//Access Operator
	float operator[](size_t idx);

	friend std::ostream& operator<<(std::ostream& os, const Vector2& vec)
	{

		os << "(" << vec._x << "," << vec._y << ")";

		return os;
	}

private:

	float _x, _y;
};// Final vec 2


//=================================================  VECTOR 3  =========================================


class Vector3
{

public:

	//constructors
	Vector3();
	Vector3(float x, float y, float z);

	// Define accessor functions.
	int x() { return _x; }
	int y() { return _y; }
	int z() { return _z; }

	// operator overloads	 
	Vector3 operator+(const Vector3& rhs);
	Vector3 operator-(const Vector3& rhs);
	Vector3 operator*(const Vector3& rhs);
	Vector3 operator/(const Vector3& rhs);
	Vector3 operator+=(const Vector3& rhs);
	Vector3 operator-=(const Vector3& rhs);
	Vector3 operator*=(const Vector3& rhs);
	Vector3 operator/=(const Vector3& rhs);

	//prefixed operator
	Vector3& operator++();
	Vector3& operator--();
	//posfixed operator
	Vector3 operator++(int);
	Vector3 operator--(int);

	//Operator overload ==
	bool operator==(const Vector3& rhs);
	//Access Operator
	float operator[](size_t idx);

	friend std::ostream& operator<<(std::ostream& os, const Vector3& vec)
	{
		os << "(" << vec._x << "," << vec._y << "," << vec._z << ")";

		return os;
	}

	
private:

	float _x, _y, _z;

};//Final Vec3


}


