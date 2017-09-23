#ifndef __MATH_MATRIX__
#define __MATH_MATRIX__

#include "Triplet.h"
#include "Quaternion.h"

namespace xengine
{
	template<typename T>
	class Matrix3
	{
	public:
		~Matrix3() {}

		Matrix3(const Triplet<T>& a, const Triplet<T>& b, const Triplet<T>& c) {
			x[0][0] = a.getX();    x[0][1] = b.getX();    x[0][2] = c.getX();
			x[1][0] = a.getY();    x[1][1] = b.getY();    x[1][2] = c.getY();
			x[2][0] = a.getZ();    x[2][1] = b.getZ();    x[2][2] = c.getZ();
		}

		Matrix3(const T[3][3] t) {
			x[0][0] = t[0][0];    x[0][1] = t[0][1];    x[0][2] = t[0][2];
			x[1][0] = t[1][0];    x[1][1] = t[1][1];    x[1][2] = t[1][2];
			x[2][0] = t[2][0];    x[2][1] = t[2][1];    x[2][2] = t[2][2];
		}

		Matrix3(T a0, T b0, T c0, T a1, T b1, T c1, T a2, T b2, T c2) {
			x[0][0] = a0;    x[0][1] = b0;    x[0][2] = c0;
			x[1][0] = a1;    x[1][1] = b1;    x[1][2] = c1;
			x[2][0] = a2;    x[2][1] = b2;    x[2][2] = c2;
		}

		inline T& operator[][] (int i, int j);

		void inverse();
		void transpose();
		void multiply(const Matrix3<T>& mul);

	private:
		T x[3][3];
	};

	template<typename T>
	inline T& Matrix3<T>::operator[][](int i, int j) {
		if (i >= 0 && i <= 3 && j >= 0 && j <= 3) {
			return this->x[i][j];
		}
		else {
			printf("ERROR, Out of range, i:%d should be [0, 3], j:%d should be [0, 3]\n", i, j);
			exit(-1);
		}
	}
}

#endif // __MATH_MATRIX__
