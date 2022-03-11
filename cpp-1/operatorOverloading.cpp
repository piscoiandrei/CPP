#include <iostream>
#include <string>
using namespace std;

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

	Vector2 operator+=(const Vector2& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}
	bool operator!=(const Vector2& other) const
	{
		return !(*this == other);
	}

};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ' ' << other.y << '\n';
	return stream;
}

int main()
{
	Vector2 pos(1, 1);
	Vector2 speed(2, 2);
	Vector2 powerup(1.1, 1.2);

	Vector2 result = pos.Add(speed.Multiply(powerup));
	// <=>
	Vector2 result1 = pos + (speed * powerup);
	pos += speed;

	cout << (pos == speed) << '\n';
	cout << pos << '\n';

}