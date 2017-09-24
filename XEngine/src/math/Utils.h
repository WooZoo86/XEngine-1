#ifndef __MATH_UTILS__
#define __MATH_UTILS__

#include "Vector3I.h"
#include "Vector4I.h"
#include "Matrix.h"

namespace xengine
{
	// 向量的运算
	template<typename T>
	extern Vector3I<T> Multiply(const Vector3I<T>& t, const T& expr);

	template<typename T>
	extern Vector4I<T> Multiply(const Vector4I<T>& t, const T& expr);


	template<typename T>
	extern T Dot(const Vector3I<T>& t1, const Vector3I<T>& t2);

	template<typename T>
	extern T Dot(const Vector4I<T>& t1, const Vector4I<T>& t2);


	template<typename T>
	extern Vector3I<T> Cross(const Vector3I<T>& t1, const Vector3I<T>& t2);

	template<typename T>
	extern Vector4I<T> Cross(const Vector4I<T>& t1, const Vector4I<T>& t2);


	// 矩阵的运算
	template<typename T>
	extern Matrix3I<T> Multiply(const Matrix3I<T>& t1, const Matrix3I<T>& t2);

	template<typename T>
	extern Matrix4<T> Multiply(const Matrix4<T>& t1, const Matrix4<T>& t2);

	template<typename T>
	extern Matrix4<T> Inverse(const Matrix4<T>& t);
}

#endif // __MATH_UTILS__