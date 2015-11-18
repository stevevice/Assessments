#ifndef _VECTOR2_H_
#define _VECTOR2_H_

template<typename T>
class Vector2
{
private:
	

public:
	T X, Y;

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
Vector2<T>

#endif // _VECTOR2_H_