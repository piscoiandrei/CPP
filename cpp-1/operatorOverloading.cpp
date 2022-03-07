#include <iostream>
#include <string>


class Vector2
{
public:
	float x, y;
	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator*(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
};

int main()
{
	Vector2 pos(1, 1);
	Vector2 speed(2, 2);
	Vector2 powerup(1.1, 1.2);

	Vector2 result = pos.Add(speed.Multiply(powerup));
	// <=>
	Vector2 result1 = pos + (speed * powerup);
}