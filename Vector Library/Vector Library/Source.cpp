#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

int main()
{
	Vector2<float> A, B, C;
	A.X = 3;
	A.Y = 3;
	B.X = 4;
	B.Y = 4;

	std::cout << Dot(A, B) << std::endl;

	std::cout << A.Magnitude() << std::endl;
	
	std::cout << A.Norm().X << ", " << A.Norm().Y << std::endl;






	

	return 0;
}