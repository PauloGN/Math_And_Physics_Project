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
		//Access Operator
		float operator[](size_t idx);


		void PrintVector2();

	private:

		float _x, _y;

	};

	//===========================  VECTOR 3 ==========================\\

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

		void PrintVector3();

	private:

		float _x, _y, _z;

	};

}



