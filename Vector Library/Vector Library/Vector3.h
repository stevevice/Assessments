#ifndef _VECTOR3_H_
#define _VECTOR3_H_
#include <cmath>

template<typename T>
class Vector3
{
private:


public:
	T X, Y, Z;

	T Magnitude();
	Vector3<T> Norm();

	Vector3();
	~Vector3();
};

template<typename T>
Vector3<T>::Vector3()
{

}

template<typename T>
Vector3<T>::~Vector3()
{

}

template<typename T>
Vector3<T> operator+(Vector3<T> A, Vector3<T> B)  //Adding Vectors
{
	Vector3<T> C;
	C.X = A.X + B.X;
	C.Y = A.Y + B.Y;
	C.Z = A.Z + B.Z;

	return C;
} 

template<typename T>
Vector3<T> operator-(Vector3<T> A) // Giving the Vector 
{

	Vector3<T> C;
	C.X = -A.X;
	C.Y = -A.Y;
	C.Z = -A.Z;

	return C;
}

template<typename T>
Vector3<T> operator-(Vector3<T> A, Vector3<T> B)
{
	return A + -B;

	// return operator+(A, operator-(B));
}

template<typename T>
Vector3<T> operator*(Vector3<T> A, Vector3<T> B)
{
	Vector3<T> C;
	C.X = A.X * B.X;
	C.Y = A.Y * B.Y;
	C.Z = A.Z * B.Z;

	return C;
}

template<typename T>
Vector3<T> operator/(Vector3<T> A, Vector3<T> B)
{
	Vector3<T> C;
	C.X = A.X / B.X;
	C.Y = A.Y / B.Y;
	C.Z = A.Z / B.Z;

	return C;
}

template<typename T>
T Vector3<T>::Magnitude()
{
	T Mag;
	Mag = sqrt((X * X) + (Y * Y) + (Z * Z));

	return Mag;
}

template<typename T>
Vector3<T> Vector3<T>::Norm()
{
	Vector3<T> NormVec;
	NormVec.X = X / Magnitude();
	NormVec.Y = Y / Magnitude();
	NormVec.Z = Z / Magnitude();

	return NormVec;
}

template<typename T>
T Dot(Vector3<T> A, Vector3<T> B)
{
	T DotPr;
	DotPr = (A.X * B.X) + (A.Y * B.Y) + (A.Z * B.Z);

	return DotPr;
}

template<typename T>
Vector3<T> Cross(Vector3<T> A, Vector3<T> B)  //?? × ?? = ??2??3 ? ??3??2, ??3??1 ? ??1??3, ??1??2 ? ??2??1
{
	Vector3<T> CrossPr;
	CrossPr.X = (A.Y * B.Z) - (A.Z * B.Y);
	CrossPr.Y = (A.Z * B.X) - (A.X * B.Z);
	CrossPr.Z = (A.X * B.Y) - (A.Y - B.X);
	
	return CrossPr;
}



#endif // _VECTOR3_H_