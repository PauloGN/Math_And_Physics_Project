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

