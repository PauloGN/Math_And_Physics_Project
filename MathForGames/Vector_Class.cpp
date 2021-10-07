#include "Vector_Class.h"

// ==============================     VECTOR 2 Testing ========================================\\


void geometry::Vector2Test()
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
	std::cout << "\n\t=========================  Friend Function operator<<   ===============================\n\n";
	std::cout << charPos;
	std::cout << "\n\t===============================================================\n\n";

}

// ==============================     VECTOR 3 Testing ========================================\\

void geometry::Vector3Test()
{

	geometry::Vector3 enemyPos(2.0f, 2.0f,10.5f);
	geometry::Vector3 charPos(1.0f, 3.0f,4.3f);
	geometry::Vector3 result;

	//Operators tests
	result = enemyPos + charPos;
	std::cout << "sum: ";
	std::cout << result << std::endl;

	result = enemyPos - charPos;
	std::cout << "Subtraction: ";
	std::cout << result << std::endl;

	result = enemyPos / charPos;
	std::cout << "Division: ";
	std::cout << result << std::endl;

	result = enemyPos * charPos;
	std::cout << "Multiplication: ";
	std::cout << result << std::endl;

	std::cout << "vector2[0]: " << result[0] << " and " << "vector2[1]: " << result[1];

	std::cout << "\n\t===============================================================\n\n";
	std::cout << "enemypos: ";
	std::cout << enemyPos << std::endl;

	std::cout << "enemyPos += enemypos: ";
	std::cout<<(enemyPos += enemyPos)<<std::endl;
	std::cout << "enemyPos -= enemypos: ";
	std::cout << (enemyPos -= enemyPos) << std::endl;


	std::cout << "\n\t===============================================================\n\n";

	std::cout << "CharPos:";
	std::cout<<charPos<<std::endl;
	std::cout << "++CharPos:";
	++charPos;
	std::cout << charPos << std::endl;
	std::cout << "CharPos++:";
	charPos++;
	std::cout << charPos << std::endl;

	std::cout << "\n\t===============================================================\n\n";

	std::cout << "CharPos:";
	std::cout << charPos << std::endl;
	std::cout << "--CharPos:";
	--charPos;
	std::cout << charPos << std::endl;
	std::cout << "CharPos--:";
	charPos--;
	std::cout << charPos << std::endl;

	std::cout << "\n\t===============================================================\n\n";

	std::cout << "true or false(enemyPos == charPos): ";
	(enemyPos == charPos) ? std::cout << "Yes(true)" : std::cout << "No(false)\n";
	std::cout << "\n\t=========================  Friend Function operator<<   ===============================\n\n";
	std::cout << charPos;
	std::cout << "\n\t===============================================================\n\n";

}
