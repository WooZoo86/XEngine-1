#ifndef __MATH_Vector2I__
#define __MATH_Vector2I__

#include <iostream>

namespace xengine
{

	#define TYPE int

	class Vector2I
	{
	public:
		~Vector2I() {}

		Vector2I(const TYPE& _x, const TYPE& _y) : x(_x), y(_y) {}
		Vector2I(const Vector2I& p) { x = p.getX(); y = p.getY(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }

		inline void set(const TYPE& _x, const TYPE& _y) { x = _x; y = _y; }
		inline void set(const Vector2I& p) { x = p.getX(); y = p.getY(); }

		inline bool equals(const Vector2I& p) { return x == p.getX() && y == p.getY(); }

		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else {
				printf("ERROR, Out of range, %d should be [0, 1]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
	};

	class Vector3I
	{
	public:
		~Vector3I() {}

		Vector3I(const TYPE& _x, const TYPE& _y, const TYPE& _z) : x(_x), y(_y), z(_z) {}
		Vector3I(const Vector2I& p, const TYPE& _z) { x = p.getX(); y = p.getY(); z = z; }
		Vector3I(const Vector3I& p) { x = p.getX(); y = p.getY(); z = p.getZ(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }
		inline TYPE getZ() const { return z; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }
		inline void setZ(const TYPE& _z) { z = _z; }

		inline void set(const TYPE& _x, const TYPE& _y, const TYPE& _z) { x = _x; y = _y; z = _z; }
		inline void set(const Vector2I& p, const TYPE& _z) { x = p.getX(); y = p.getY(); z = _z; }
		inline void set(const Vector3I& p) { x = p.getX(); y = p.getY(); z = p.getZ(); }

		inline bool equals(const Vector3I& p) { return x == p.getX() && y == p.getY() && z == p.getZ(); }

		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else if (i == 2) return z;
			else {
				printf("ERROR, Out of range, %d should be [0, 2]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
		TYPE z;
	};

	class Vector4I
	{
	public:
		~Vector4I() {}

		Vector4I(const TYPE& _x, const TYPE& _y, const TYPE& _z, const TYPE& _w) : x(_x), y(_y), z(_z), w(_w) {}
		Vector4I(const Vector2I& p, const TYPE& _z, const TYPE& _w) { x = p.getX(); y = p.getY(); z = _z; w = _w; }
		Vector4I(const Vector3I& p, const TYPE& _w) { x = p.getX(); y = p.getY(); z = p.getZ(); w = _w; }
		Vector4I(const Vector4I& p) { x = p.getX(); y = p.getY(); z = p.getZ(); w = p.getW(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }
		inline TYPE getZ() const { return z; }
		inline TYPE getW() const { return w; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }
		inline void setZ(const TYPE& _z) { z = _z; }
		inline void setW(const TYPE& _w) { w = _w; }

		inline void set(const TYPE& _x, const TYPE& _y, const TYPE& _z, const TYPE& _w) { x = _x; y = _y; z = _z; w = _w; }
		inline void set(const Vector2I& p, const TYPE& _z, const TYPE& _w) { x = p.getX(); y = p.getY(); z = _z; w = _w; }
		inline void set(const Vector3I& p, const TYPE& _w) { x = p.getX(); y = p.getY(); z = p.getZ(); w = _w; }
		inline void set(const Vector4I& p) { x = p.getX(); y = p.getY(); z = p.getZ(); w = p.getW(); }

		inline bool equals(const Vector4I& p) { return x == p.getX() && y == p.getY() && z == p.getZ() && w == p.getW(); }

		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else if (i == 2) return z;
			else if (i == 3) return w;
			else {
				printf("ERROR, Out of range, %d should be [0, 3]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
		TYPE z;
		TYPE w;
	};


	#define TYPE    float
	#define EPSINON	0.00001f

	#define CMPF(x, y)		((x - y) > -EPSINON && (x - y) < EPSINON)

	class Vector2F
	{
	public:
		~Vector2F() {}

		Vector2F(const TYPE& _x, const TYPE& _y) : x(_x), y(_y) {}
		Vector2F(const Vector2F& p) { x = p.getX(); y = p.getY(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }
		inline void set(const TYPE& _x, const TYPE& _y) { x = _x; y = _y; }
		inline void set(const Vector2F& p) { x = p.getX(); y = p.getY(); }

		inline bool equals(const Vector2F& p) { return CMPF(x, p.getX()) && CMPF(y, p.getY()); }
		
		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else {
				printf("ERROR, Out of range, %d should be [0, 1]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
	};

	class Vector3F
	{
	public:
		~Vector3F() {}

		Vector3F(const TYPE& _x, const TYPE& _y, const TYPE& _z) : x(_x), y(_y), z(_z) {}
		Vector3F(const Vector2F& p, const TYPE& _z) { x = p.getX(); y = p.getY(); z = z; }
		Vector3F(const Vector3F& p) { x = p.getX(); y = p.getY(); z = p.getZ(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }
		inline TYPE getZ() const { return z; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }
		inline void setZ(const TYPE& _z) { z = _z; }

		inline void set(const TYPE& _x, const TYPE& _y, const TYPE& _z) { x = _x; y = _y; z = _z; }
		inline void set(const Vector2F& p, const TYPE& _z) { x = p.getX(); y = p.getY(); z = _z; }
		inline void set(const Vector3F& p) { x = p.getX(); y = p.getY(); z = p.getZ(); }

		inline bool equals(const Vector3F& p) { return CMPF(x, p.getX()) && CMPF(y, p.getY()) && CMPF(z, p.getZ()); }

		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else if (i == 2) return z;
			else {
				printf("ERROR, Out of range, %d should be [0, 2]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
		TYPE z;
	};

	class Vector4F
	{
	public:
		~Vector4F() {}

		Vector4F(const TYPE& _x, const TYPE& _y, const TYPE& _z, const TYPE& _w) : x(_x), y(_y), z(_z), w(_w) {}
		Vector4F(const Vector2F& p, const TYPE& _z, const TYPE& _w) { x = p.getX(); y = p.getY(); z = _z; w = _w; }
		Vector4F(const Vector3F& p, const TYPE& _w) { x = p.getX(); y = p.getY(); z = p.getZ(); w = _w; }
		Vector4F(const Vector4F& p) { x = p.getX(); y = p.getY(); z = p.getZ(); w = p.getW(); }

		inline TYPE getX() const { return x; }
		inline TYPE getY() const { return y; }
		inline TYPE getZ() const { return z; }
		inline TYPE getW() const { return w; }

		inline void setX(const TYPE& _x) { x = _x; }
		inline void setY(const TYPE& _y) { y = _y; }
		inline void setZ(const TYPE& _z) { z = _z; }
		inline void setW(const TYPE& _w) { w = _w; }

		inline void set(const TYPE& _x, const TYPE& _y, const TYPE& _z, const TYPE& _w) { x = _x; y = _y; z = _z; w = _w; }
		inline void set(const Vector2F& p, const TYPE& _z, const TYPE& _w) { x = p.getX(); y = p.getY(); z = _z; w = _w; }
		inline void set(const Vector3F& p, const TYPE& _w) { x = p.getX(); y = p.getY(); z = p.getZ(); w = _w; }
		inline void set(const Vector4F& p) { x = p.getX(); y = p.getY(); z = p.getZ(); w = p.getW(); }

		inline bool equals(const Vector4F& p) { return CMPF(x, p.getX()) && CMPF(y, p.getY()) && CMPF(z, p.getZ()) && CMPF(w, p.getW()); }

		inline TYPE&   operator[] (int i) {
			if (i == 0) return x;
			else if (i == 1) return y;
			else if (i == 2) return z;
			else if (i == 3) return w;
			else {
				printf("ERROR, Out of range, %d should be [0, 3]\n", i);
				exit(-1);
			}
		}

	private:
		TYPE x;
		TYPE y;
		TYPE z;
		TYPE w;
	};
}

#endif // __MATH_Vector2I__