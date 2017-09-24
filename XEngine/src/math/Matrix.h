#ifndef __MATH_MATRIX__
#define __MATH_MATRIX__

#include "Vector.h"

namespace xengine
{

	#define TYPE int

	class Matrix3I
	{
	public:
		~Matrix3I() {}

		Matrix3I(const Vector3I& a, const Vector3I& b, const Vector3I& c) {
			x[0][0] = a.getX();    x[0][1] = b.getX();    x[0][2] = c.getX();
			x[1][0] = a.getY();    x[1][1] = b.getY();    x[1][2] = c.getY();
			x[2][0] = a.getZ();    x[2][1] = b.getZ();    x[2][2] = c.getZ();
		}

		Matrix3I(const TYPE t[3][3]) {
			x[0][0] = t[0][0];    x[0][1] = t[0][1];    x[0][2] = t[0][2];
			x[1][0] = t[1][0];    x[1][1] = t[1][1];    x[1][2] = t[1][2];
			x[2][0] = t[2][0];    x[2][1] = t[2][1];    x[2][2] = t[2][2];
		}

		Matrix3I(TYPE a0, TYPE b0, TYPE c0, TYPE a1, TYPE b1, TYPE c1, TYPE a2, TYPE b2, TYPE c2) {
			x[0][0] = a0;    x[0][1] = b0;    x[0][2] = c0;
			x[1][0] = a1;    x[1][1] = b1;    x[1][2] = c1;
			x[2][0] = a2;    x[2][1] = b2;    x[2][2] = c2;
		}

		inline TYPE& at(int i, int j) {
			if (i >= 0 && i <= 3 && j >= 0 && j <= 3) {
				return x[i][j];
			}
			else {
				printf("ERROR, Out of range, i:%d should be [0, 3], j:%d should be [0, 3]\n", i, j);
				exit(-1);
			}
		}

		void inverse();
		void transpose();
		void multiplyByRight(const Matrix3I& mul);
		void multiplyByLeft(const Matrix3I& mul);

	private:
		TYPE x[3][3];
	};
}

#endif // __MATH_MATRIX__
