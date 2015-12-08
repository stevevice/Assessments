#ifndef _VECTOR4_H_
#define _VECTOR4_H_
#include <cmath>

class Vector4
{
private:


public:
	int R, G, B, A;

	float Magnitude(); //Member Function that is set to type integer
	Vector4 Norm();

	Vector4();
	~Vector4();
};

Vector4::Vector4()
{

}

Vector4::~Vector4()
{

}

float Vector4::Magnitude()
{
	float Mag;
	Mag = sqrt((R * R) + (G * G) + (B * B) + (A * A));

	return Mag;
}

Vector4 Vector4::Norm()
{
	Vector4 NormVec;
	NormVec.R = R / Magnitude();
	NormVec.G = G / Magnitude();
	NormVec.B = B / Magnitude();
	NormVec.A = A / Magnitude();

	return NormVec;
}


#endif //_VECTOR4_H_