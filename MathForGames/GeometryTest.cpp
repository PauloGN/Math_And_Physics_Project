#include<iostream>
#include"Vector_Class.h"



int main()
{

	geometry::Vector2 enemyPos(2.0f, 2.0f);
	geometry::Vector2 charPos(1.0f, 3.0f);
	geometry::Vector2 result;

	//Operators tests
	result = enemyPos + charPos;
	std::cout << "sum: ";
	result.PrintVector2();

	result = enemyPos - charPos;
	std::cout << "Subtraction: ";
	result.PrintVector2();

	result = enemyPos / charPos;
	std::cout << "Division: ";
	result.PrintVector2();

	result = enemyPos * charPos;
	std::cout << "Multiplication: ";
	result.PrintVector2();

	std::cout << "vector2[0]: " << result[0] << " and " << "vector2[1]: " << result[1];

	std::cout << "\n\t===============================================================\n\n";
	std::cout << "enemypos: ";
	enemyPos.PrintVector2();
	std::cout << "enemyPos += enemypos: ";
	(enemyPos += enemyPos).PrintVector2();
	std::cout << "enemyPos -= enemypos: ";
	(enemyPos -= enemyPos).PrintVector2();

	std::cout << "\n\t===============================================================\n\n";

	std::cout << "CharPos:";
	charPos.PrintVector2();
	std::cout << "++CharPos:";
	++charPos;
	charPos.PrintVector2();
	std::cout << "CharPos++:";
	charPos++;
	charPos.PrintVector2();

	std::cout << "\n\t===============================================================\n\n";

	std::cout << "CharPos:";
	charPos.PrintVector2();
	std::cout << "--CharPos:";
	--charPos;
	charPos.PrintVector2();
	std::cout << "CharPos--:";
	charPos--;
	charPos.PrintVector2();

	std::cout << "\n\t===============================================================\n\n";

	std::cout << "true or false(enemyPos == charPos): ";
	(enemyPos == charPos) ? std::cout << "Yes(true)" : std::cout << "No(false)\n";

	return 0;
}