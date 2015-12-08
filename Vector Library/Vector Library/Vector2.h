#ifndef _VECTOR2_H_
#define _VECTOR2_H_
#include <cmath>

template<typename T>
class Vector2
{
private:
	

public:
	T X, Y;

	T Magnitude();
	Vector2<T> Norm();

	Vector2();
	~Vector2();
};

template<typename T>
Vector2<T>::Vector2()
{

}

template<typename T>
Vector2<T>::~Vector2()
{

}

template<typename T>
Vector2<T> operator+(Vector2<T> A, Vector2<T> B) 
{
	Vector2<T> C;
	C.X = A.X + B.X;
	C.Y = A.Y + B.Y;

	return C;
}

template<typename T>
Vector2<T> operator-(Vector2<T> A)
{

	Vector2<T> C;
	C.X = -A.X;
	C.Y = -A.Y;

	return C;
}

template<typename T>
Vector2<T> operator-(Vector2<T> A, Vector2<T> B)
{
	return A + -B;

	// return operator+(A, operator-(B));
}

template<typename T>
Vector2<T> operator*(Vector2<T> A, Vector2<T> B)
{
	Vector2<T> C;
	C.X = A.X * B.X;
	C.Y = A.Y * B.Y;

	return C;
}

template<typename T>
Vector2<T> operator/(Vector2<T> A, Vector2<T> B)
{
	Vector2<T> C;
	C.X = A.X / B.X;
	C.Y = A.Y / B.Y;

	return C;
}

template<typename T>
T Vector2<T>::Magnitude()
{
	T Mag;
	Mag = sqrt((X * X) + (Y * Y));

	return Mag;
}

template<typename T>
Vector2<T> Vector2<T>::Norm()
{
	Vector2<T> NormVec;
	NormVec.X = X / Magnitude();
	NormVec.Y = Y / Magnitude();

	return NormVec;
}

template<typename T>
T Dot(Vector2<T> A, Vector2<T> B) //Vector2<T> Dot (Vector2<T> A, Vector2<T> B) 
{
	T DotPr;
	DotPr = (A.X * B.X) + (A.Y * B.Y);

	return DotPr;
}

//template<typename T>
//Vector2<T> operator n(Vector2<T> A, Vector2<T> B)       HOW NOT TO DO OVERLOADED OPERATORS
//{
//	Vector2<T> C;
//	C = A | B;
//	C.X = C.X
//	C.Y = sqrt((A.Y * A.Y) + (B.Y * B.Y));
//
//	return C;
//}

#endif // _VECTOR2_H_