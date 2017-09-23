#ifndef __MATH_TRIPLET__
#define __MATH_TRIPLET__

#include "Pair.h"

namespace xengine
{
	template<typename T>
	class Triplet
	{
	public:
		~Triplet() {}

		Triplet(const T& _x, const T& _y, const T& _z) : x(_x), y(_y), z(_z) {}
		Triplet(const Pair& p, const T& z) {
			this->x = p.x;
			this->y = p.y;
			this->z = z;
		}
		Triplet(const Triplet& p) {
			this->x = p.x;
			this->y = p.y;
			this->z = p.z;
		}

		inline T getX();
		inline T getY();
		inline T getZ();

		inline void setX(const T& x);
		inline void setY(const T& y);
		inline void setZ(const T& z);

		inline void set(const T& x, const T& y, const T& z);
		inline void set(const Pair& p, const T& z);
		inline void set(const Triplet& p);

		inline bool equals(const Triplet& p);
		inline bool operator == (const Triplet& p);
		inline T&   operator[] (int i);

	private:
		T x;
		T y;
		T z;
	};

	template<typename T>
	inline T Triplet<T>::getX() {
		return this->x;
	}

	template<typename T>
	inline T Triplet<T>::getY() {
		return this->y;
	}

	template<typename T>
	inline T Triplet<T>::getZ() {
		return this->z;
	}

	template<typename T>
	inline void Triplet<T>::setX(const T& x) {
		this->x = std::move(x);
	}

	template<typename T>
	inline void Triplet<T>::setY(const T& y) {
		this->y = std::move(y);
	}

	template<typename T>
	inline void Triplet<T>::setZ(const T& z) {
		this->z = std::move(z);
	}

	template<typename T>
	inline void Triplet<T>::set(const T& x, const T& y, const T& z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	template<typename T>
	inline void Triplet<T>::set(const Pair<T>& p, const T& z) {
		this->x = p.x;
		this->y = p.y;
		this->z = z;
	}

	template<typename T>
	inline void Triplet<T>::set(const Triplet<T>& p) {
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
	}

	template<typename T>
	inline bool Triplet<T>::equals(const Triplet<T>& p) {
		return this->x == p.x && this->y == p.y && this->z == p.z;
	}

	template<typename T>
	inline bool Triplet<T>::operator == (const Triplet<T>& p) {
		return this->x == p.x && this->y == p.y && this->z == p.z;
	}

	template<typename T>
	inline T& Triplet<T>::operator [] (int p) {
		if (p == 0) return this->x;
		else if (p == 1) return this->y;
		else if (p == 2) return this->z;
		else {
			printf("ERROR, Out of range, %d should be [0, 2]\n", p);
			exit(-1);
		}
	}
}

#endif // __MATH_TRIPLET__