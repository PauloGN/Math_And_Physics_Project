#include "pch.h"
#include "..\MathAndPhysics_3\Vector.h"

TEST(Vector2, Constructors) 
{
	//Default Constructor
	{
		geometry::Vector2 vector2;
	
		EXPECT_EQ(vector2.x(), 0);
		EXPECT_EQ(vector2.y(), 0);
	}

	//Parameterized Constructor
	{
		geometry::Vector2 vector2(1.0f, 4.0f);

		ASSERT_EQ(vector2.x(), 1.0f);
		ASSERT_EQ(vector2.y(), 4.0f);
	}
}

//Operators +, -, /, * 
TEST(Vector2, ArithmeticOperators)
{

	geometry::Vector2 hero = geometry::Vector2(1.0f, 1.0f);
	geometry::Vector2 enemy = geometry::Vector2(4.0f, 4.0f);
	geometry::Vector2 result = geometry::Vector2();

	//Sum
	result = enemy + hero;

	EXPECT_EQ(result.x(), 5.0f);
	EXPECT_EQ(result.y(), 5.0f);
	//Subtraction
	result = geometry::Vector2(2.0f, 4.0f) - geometry::Vector2(4.0f, 4.0f);

	EXPECT_EQ(result.x(), -2.0f);
	EXPECT_EQ(result.y(), 0.0f);

	//Division
	result = geometry::Vector2(8.0f, 16.0f) / geometry::Vector2(4.0f, 4.0f);
	EXPECT_EQ(result.x(), 2.0f);
	EXPECT_EQ(result.y(), 4.0f);

	//Multiplication
	result = enemy * hero;
	EXPECT_EQ(result.x(), 4.0f);
	EXPECT_EQ(result.y(), 4.0f);
	result = geometry::Vector2(8.0f, 16.0f) * geometry::Vector2(4.0f, 4.0f);
	EXPECT_EQ(result.x(), 32.0f);
	EXPECT_EQ(result.y(), 64.0f);

}

//Operators +=, -=, *=, /=, ++, --, Pos and prefixed and accessor []

TEST(Vector2, ShortOperators)
{
	geometry::Vector2 vector2 = geometry::Vector2(4.5f, 7.3f);

	// += 
	vector2 += geometry::Vector2(10.0f, 2.0f);

	EXPECT_EQ(vector2.x(), 14.5f);
	EXPECT_EQ(vector2.y(), 9.3f);

	// -=
	vector2 -= geometry::Vector2(10.0f, 2.0f);
	EXPECT_EQ(vector2.x(), 4.5f);
	EXPECT_EQ(vector2.y(), 7.3f);

	// /=
	vector2 = geometry::Vector2(20.0f, 100.0f);
	vector2 /= geometry::Vector2(10.0f, 2.0f);
	EXPECT_EQ(vector2.x(), 2.0f);
	EXPECT_EQ(vector2.y(), 50.0f);

	// *=
	vector2 *= geometry::Vector2(10.0f, 2.0f);
	EXPECT_EQ(vector2.x(), 20.0f);
	EXPECT_EQ(vector2.y(), 100.0f);

	// ++pre

	++vector2;
	float x = vector2[0];
	float y = vector2[1];
	float T = vector2[33];

	EXPECT_EQ(x, 21.0f);
	EXPECT_EQ(y, 101.0f);
	EXPECT_EQ(T, 0.0f);

	// post++

	vector2++;
	x = vector2[0];
	y = vector2[1];
	T = vector2[-25];

	EXPECT_EQ(x, 22.0f);
	EXPECT_EQ(y, 102.0f);
	EXPECT_EQ(T, 0.0f);
}

//Equality Operators
TEST(Vector2, EqualityOperators)
{

	geometry::Vector2 enemy(2.0f, 3.0f);
	geometry::Vector2 hero = enemy;

	bool isEqual = (hero == enemy);
	EXPECT_TRUE(isEqual);

	hero = geometry::Vector2(2.0f, 6.0f);
	isEqual = (hero == enemy);
	EXPECT_FALSE(isEqual);
}