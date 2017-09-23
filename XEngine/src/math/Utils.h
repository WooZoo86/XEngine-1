#ifndef __MATH_UTILS__
#define __MATH_UTILS__

#include "Triplet.h"
#include "Quaternion.h"
#include "Matrix.h"

namespace xengine
{
	// 向量的运算
	template<typename T>
	extern Triplet<T> Multiply(const Triplet<T>& t, const T& expr);

	template<typename T>
	extern Quaternion<T> Multiply(const Quaternion<T>& t, const T& expr);


	template<typename T>
	extern T Dot(const Triplet<T>& t1, const Triplet<T>& t2);

	template<typename T>
	extern T Dot(const Quaternion<T>& t1, const Quaternion<T>& t2);


	template<typename T>
	extern Triplet<T> Cross(const Triplet<T>& t1, const Triplet<T>& t2);

	template<typename T>
	extern Quaternion<T> Cross(const Quaternion<T>& t1, const Quaternion<T>& t2);


	// 矩阵的运算
	template<typename T>
	extern Matrix3<T> Multiply(const Matrix3<T>& t1, const Matrix3<T>& t2);

	template<typename T>
	extern Matrix4<T> Multiply(const Matrix4<T>& t1, const Matrix4<T>& t2);

	template<typename T>
	extern Matrix4<T> Inverse(const Matrix4<T>& t);
}

#endif // __MATH_UTILS__