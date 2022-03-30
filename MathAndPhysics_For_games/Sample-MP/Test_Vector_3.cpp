#include"pch.h"
#include "gtest/gtest.h"
#include "..\MathAndPhysics_3\Vector.h"

//EXPECT_TRUE(true);
 //expect NE (not equal)
 //AssertEQ

TEST(Vector3, Constructors)
{
	//Default Constructor
	{
		geometry::Vector3 vector3;

		EXPECT_EQ(vector3.x(), 0);
		EXPECT_EQ(vector3.y(), 0);
		EXPECT_EQ(vector3.z(), 0);
	}

	//Parameterized Constructor
	{
		geometry::Vector3 vector3(1.0f, 4.0f, 5.0f);

		ASSERT_EQ(vector3.x(), 1.0f);
		ASSERT_EQ(vector3.y(), 4.0f);
		ASSERT_EQ(vector3.z(), 5.0f);
	}
}

//Operators +, -, /, * 
TEST(Vector3, ArithmeticOperators)
{

	geometry::Vector3 hero = geometry::Vector3(1.0f, 1.0f, 2.0f);
	geometry::Vector3 enemy = geometry::Vector3(4.0f, 4.0f, 2.0f);
	geometry::Vector3 result = geometry::Vector3();

	//Sum
	result = enemy + hero;

	EXPECT_EQ(result.x(), 5.0f);
	EXPECT_EQ(result.y(), 5.0f);
	EXPECT_EQ(result.z(), 4.0f);

	//Subtraction
	result = geometry::Vector3(2.0f, 4.0f, 1.0f) - geometry::Vector3(4.0f, 4.0f, -3.0f);

	EXPECT_EQ(result.x(), -2.0f);
	EXPECT_EQ(result.y(), 0.0f);
	EXPECT_EQ(result.z(), 4.0f);

	//Division
	result = geometry::Vector3(8.0f, 16.0f, 10.0f) / geometry::Vector3(4.0f, 4.0f, 2.0f);
	EXPECT_EQ(result.x(), 2.0f);
	EXPECT_EQ(result.y(), 4.0f);
	EXPECT_EQ(result.z(), 5.0f);

	//Multiplication
	result = enemy * hero;
	EXPECT_EQ(result.x(), 4.0f);
	EXPECT_EQ(result.y(), 4.0f);
	result = geometry::Vector3(8.0f, 16.0f, 0.0f) * geometry::Vector3(4.0f, 4.0f, 50.0f);
	EXPECT_EQ(result.x(), 32.0f);
	EXPECT_EQ(result.y(), 64.0f);
	EXPECT_EQ(result.z(), 0.0f);
}


//Operators +=, -=, *=, /=, ++, --, Pos and prefixed and accessor []

TEST(Vector3, ShortOperators)
{
	geometry::Vector3 vector3 = geometry::Vector3(4.5f, 7.3f, -5.0f);

	// += 
	vector3 += geometry::Vector3(10.0f, 2.0f, 1.0f);

	EXPECT_EQ(vector3.x(), 14.5f);
	EXPECT_EQ(vector3.y(), 9.3f);
	EXPECT_EQ(vector3.z(), -4.0f);

	// -=
	vector3 -= geometry::Vector3(10.0f, 2.0f, 15.0f);
	EXPECT_EQ(vector3.x(), 4.5f);
	EXPECT_EQ(vector3.y(), 7.3f);
	EXPECT_EQ(vector3.z(), -19.0f);

	// /=
	vector3 = geometry::Vector3(20.0f, 100.0f, 25.0f);
	vector3 /= geometry::Vector3(10.0f, 2.0f, 5.0f);
	EXPECT_EQ(vector3.x(), 2.0f);
	EXPECT_EQ(vector3.y(), 50.0f);
	EXPECT_EQ(vector3.z(), 5.0f);

	// *=
	vector3 *= geometry::Vector3(10.0f, 2.0f, 5.0f);
	EXPECT_EQ(vector3.x(), 20.0f);
	EXPECT_EQ(vector3.y(), 100.0f);
	EXPECT_EQ(vector3.z(), 25.0f);

	// ++pre

	++vector3;
	float x = vector3[0];
	float y = vector3[1];
	float z = vector3[2];
	float T = vector3[33];

	EXPECT_EQ(x, 21.0f);
	EXPECT_EQ(y, 101.0f);
	EXPECT_EQ(z, 26.0f);
	EXPECT_EQ(T, 0.0f);

	// post++

	vector3++;
	x = vector3[0];
	y = vector3[1];
	z = vector3[2];
	T = vector3[-25];

	EXPECT_EQ(x, 22.0f);
	EXPECT_EQ(y, 102.0f);
	EXPECT_EQ(z, 27.0f);
	EXPECT_EQ(T, 0.0f);
}

//Equality Operators
TEST(Vector3, EqualityOperators)
{

	geometry::Vector3 enemy(2.0f, 3.0f, 12.0f);
	geometry::Vector3 hero = enemy;

	bool isEqual = (hero == enemy);
	EXPECT_TRUE(isEqual);

	hero = geometry::Vector3(2.0f, 6.0f, -3.0f);
	isEqual = (hero == enemy);
	EXPECT_FALSE(isEqual);
}