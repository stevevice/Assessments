#include <iostream>
#include "Vector2.h"

int main()
{
	Vector2<float> A, B, C;
	A.X = 4;
	A.Y = 4; 
	B.X = 2;
	B.Y = 1;

	C = -A;

	std::cout << C.X << ", " << C.Y << std::endl;

	return 0;
}