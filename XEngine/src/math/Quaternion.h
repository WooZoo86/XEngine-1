#ifndef __MATH_QUATERNION__
#define __MATH_QUATERNION__

#include "Pair.h"
#include "Triplet.h"

namespace xengine
{
	template<typename T>
	class Quaternion
	{
	public:
		~Quaternion() {}

		Quaternion(const T& _x, const T& _y, const T& _z, const T& _w) : x(_x), y(_y), z(_z), w(_w) {}
		Quaternion(const Pair& p, const T& z, const T& w) {
			this->x = p.x;
			this->y = p.y;
			this->z = z;
			this->w = w;
		}
		Quaternion(const Triplet& p, const T& w) {
			this->x = p.x;
			this->y = p.y;
			this->z = p.z;
			this->w = w;
		}
		Quaternion(const Quaternion& p) {
			this->x = p.x;
			this->y = p.y;
			this->z = p.z;
			this->w = p.w;
		}

		inline T getX();
		inline T getY();
		inline T getZ();
		inline T getW();

		inline void setX(const T& x);
		inline void setY(const T& y);
		inline void setZ(const T& z);
		inline void setW(const T& w);

		inline void set(const T& x, const T& y, const T& z, const T& w);
		inline void set(const Pair& p, const T& z, const T& w);
		inline void set(const Triplet& p, const T& w);
		inline void set(const Quaternion& p);

		inline bool equals(const Quaternion& p);
		inline bool operator == (const Quaternion& p);
		inline T&   operator[] (int i);

	private:
		T x;
		T y;
		T z;
		T w;
	};

	template<typename T>
	inline T Quaternion<T>::getX() {
		return this->x;
	}

	template<typename T>
	inline T Quaternion<T>::getY() {
		return this->y;
	}

	template<typename T>
	inline T Quaternion<T>::getZ() {
		return this->z;
	}

	template<typename T>
	inline T Quaternion<T>::getW() {
		return this->w;
	}

	template<typename T>
	inline void Quaternion<T>::setX(const T& x) {
		this->x = std::move(x);
	}

	template<typename T>
	inline void Quaternion<T>::setY(const T& y) {
		this->y = std::move(y);
	}

	template<typename T>
	inline void Quaternion<T>::setZ(const T& z) {
		this->z = std::move(z);
	}

	template<typename T>
	inline void Quaternion<T>::setW(const T& w) {
		this->w = std::move(w);
	}

	template<typename T>
	inline void Quaternion<T>::set(const T& x, const T& y, const T& z, const T& w) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}

	template<typename T>
	inline void Quaternion<T>::set(const Pair<T>& p, const T& z, const T& w) {
		this->x = p.x;
		this->y = p.y;
		this->z = z;
		this->w = w;
	}

	template<typename T>
	inline void Quaternion<T>::set(const Triplet<T>& p, const T& w) {
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
		this->w = w;
	}

	template<typename T>
	inline void Quaternion<T>::set(const Quaternion<T>& p) {
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
		this->w = p.w;
	}

	template<typename T>
	inline bool Quaternion<T>::equals(const Quaternion<T>& p) {
		return this->x == p.x && this->y == p.y && this->z == p.z && this->w == p.w;
	}

	template<typename T>
	inline bool Quaternion<T>::operator == (const Quaternion<T>& p) {
		return this->x == p.x && this->y == p.y && this->z == p.z && this->w == p.w;
	}

	template<typename T>
	inline T& Quaternion<T>::operator [] (int p) {
		if (p == 0) return this->x;
		else if (p == 1) return this->y;
		else if (p == 2) return this->z;
		else if (p == 3) return this->w;
		else {
			printf("ERROR, Out of range, %d should be [0, 3]\n", p);
			exit(-1);
		}
	}
}

#endif // __MATH_QUATERNION__