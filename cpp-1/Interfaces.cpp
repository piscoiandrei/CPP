#include <iostream>
#include <string>

class Entity
{
public:
	// pure virtual function ==> has to be implemented in a subclass
	virtual std::string GetName() = 0;
};


class Player : public Entity
{
private:
	std::string aName;
public:
	Player(const std::string& name) : aName(name) {}
	std::string GetName() override { return aName; }

};

int main()
{

	Player* p = new Player("Based");
	std::cout << p->GetName() << '\n';
}