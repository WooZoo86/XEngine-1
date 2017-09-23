#ifndef __MATH_PAIR__
#define __MATH_PAIR__

namespace xengine
{
	template<typename T>
	class Pair
	{
	public:
		~Pair() {}

		Pair(const T& _x, const T& _y) : x(_x), y(_y) {}
		Pair(const Pair& p) {
			this->x = p.x;
			this->y = p.y;
		}

		inline T getX();
		inline T getY();

		inline void setX(const T& x);
		inline void setY(const T& y);
		inline void set(const T& x, const T& y);
		inline void set(const Pair& p);

		inline bool equals(const Pair& p);
		inline bool operator == (const Pair& p);
		inline T&   operator[] (int i);

	private:
		T x;
		T y;
	};

	template<typename T>
	inline T Pair<T>::getX() {
		return this->x;
	}

	template<typename T>
	inline T Pair<T>::getY() {
		return this->y;
	}

	template<typename T>
	inline void Pair<T>::setX(const T& x) {
		this->x = std::move(x);
	}

	template<typename T>
	inline void Pair<T>::setY(const T& y) {
		this->y = std::move(y);
	}

	template<typename T>
	inline void Pair<T>::set(const T& x, const T& y) {
		this->x = x;
		this->y = y;
	}

	template<typename T>
	inline void Pair<T>::set(const Pair<T>& p) {
		this->x = p.x;
		this->y = p.y;
	}

	template<typename T>
	inline bool Pair<T>::equals(const Pair<T>& p) {
		return this->x == p.x && this->y == p.y;
	}

	template<typename T>
	inline bool Pair<T>::operator == (const Pair<T>& p) {
		return this->x == p.x && this->y == p.y;
	}

	template<typename T>
	inline T& Pair<T>::operator [] (int p) {
		if (p == 0) return this->x;
		else if (p == 1) return this->y;
		else {
			printf("ERROR, Out of range, %d should be [0, 1]\n", p);
			exit(-1);
		}
	}
}

#endif // __MATH_PAIR__