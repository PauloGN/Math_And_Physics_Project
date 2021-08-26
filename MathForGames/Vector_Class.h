#pragma once
#include<iostream>
#include <xmemory>

namespace geometry
{

	class Vector2
	{
	public:

		//constructors
		Vector2();
		Vector2(float x, float y);

		// Define accessor functions.
		int x() { return _x; }
		int y() { return _y; }

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

		float operator[](size_t idx);


		void PrintVector2();

	private:

		float _x, _y;

	};

	//====================  VECTOR 3 ==========================\\

	class vector3
	{

	public:



	private:

	};

}



