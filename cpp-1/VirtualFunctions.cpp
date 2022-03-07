#include <iostream>
#include <string>

class Entity
{
public:
	virtual std::string GetName() {
		return "Entity";
	}
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
	Entity* e = new Entity();
	std::cout << e->GetName() << '\n';

	Player* p = new Player("Based");
	std::cout << p->GetName() << '\n';
}