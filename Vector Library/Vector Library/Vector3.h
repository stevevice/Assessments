#ifndef _VECTOR3_H_
#define _VECTOR3_H_

template<typename T>
class Vector3
{
private:


public:
	T X, Y, Z;

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
Vector3<T> operator-(Vector3<T> A) // Giving the Vector a negative number
{

	Vector3<T> C;
	C.X = -A.X;
	C.Y = -A.Y;
	C.Z = -A.Z;

	return C;
}

template<typename T>
Vector3<T> operator-(Vector3<T> A, Vector3<T> B) //Subtracting vectors
{
	return A + -B;

	// return operator+(A, operator-(B));
}

template<typename T>
Vector3<T> operator*(Vector3<T> A, Vector3<T> B) //Multiplying vectors
{
	Vector3<T> C;
	C.X = A.X * B.X;
	C.Y = A.Y * B.Y;
	C.Z = A.Z * B.Z;

	return C;
}

template<typename T>
Vector3<T> operator/(Vector3<T> A, Vector3<T> B) //Dividing Vectors
{
	Vector3<T> C;
	C.X = A.X / B.X;
	C.Y = A.Y / B.Y;
	C.Z = A.Z / B.Z;

	return C;
}

template<typename T>
Vector3<T> operator|(Vector3<T> A) //Magnitude of vectors
{
	int M;
	M = sqrt((A.X * A.X) + (A.Y * A.Y) + (A.Z * A.Z));
	return M;
}


#endif // _VECTOR3_H_