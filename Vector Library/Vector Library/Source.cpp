#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

int main()
{
	Vector3<float> A, B, C;
	A.X = 4;
	A.Y = 4;
	A.Z = 4;
	B.X = 2;
	B.Y = 1;
	B.Z = 5;

	C = A + B;
	std::cout << C.X << ", " << C.Y << ", " << C.Z << std::endl;

	C = A - B;
	std::cout << C.X << ", " << C.Y << ", " << C.Z << std::endl;
	
	C = A * B;
	std::cout << C.X << ", " << C.Y << ", " << C.Z << std::endl;

	C = A / B;
	std::cout << C.X << ", " << C.Y << ", " << C.Z << std::endl;

	C = -B;
	std::cout << C.X << ", " << C.Y << ", " << C.Z << std::endl;

	return 0;
}