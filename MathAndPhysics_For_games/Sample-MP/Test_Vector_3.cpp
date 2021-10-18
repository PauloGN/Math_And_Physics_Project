#include"pch.h"
#include "gtest/gtest.h"
#include "..\MathAndPhysics_3\Vector.h"

//EXPECT_TRUE(true);
 //expect NE (not equal)
 //AssertEQ

TEST(Vector3, Constructors) {

	//Default Constructor
	{
	  geometry::Vector3 vector3;
	
	  EXPECT_EQ(vector3.x(), 0);
	  EXPECT_EQ(vector3.y(), 0);
	  EXPECT_EQ(vector3.z(), 0);
	}

	//Parameterized Constructor
	{
		geometry::Vector3 vector3(-3.0f,16.0f,4.0f);

		EXPECT_EQ(vector3.x(), -3.0f);
		EXPECT_EQ(vector3.y(), 16.0f);
		EXPECT_EQ(vector3.z(), 4.0f);
	}

 }