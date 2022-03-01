#include <iostream>

class Player
{
public:
	enum Level {
		Beginner, Intermediate, Experienced, Pro
	};
private:
	Level playerLevel;
public:
	void setBeginner()
	{
		playerLevel = Beginner;
	}
};

int main()
{
	std::cout << Player::Pro;
}