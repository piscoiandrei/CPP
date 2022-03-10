#include <iostream>
#include <string>
using namespace std;

class Player
{
protected:
	string name;
	string weapon;
	string ability;
	unsigned level;

	Player(string n, string w, string a, unsigned l)
		:name(n), weapon(w), ability(a), level(l)
	{}

public:
	void setName(string n) { name = n; }
	void setWeapon(string n) { weapon = n; }
	void setAbility(string n) { ability = n; }
	void setLevel(unsigned l) { level = l; }
	string getName() const { return name; }
	string getWeapon() const { return weapon; }
	string getAbility() const { return ability; }
	unsigned getLevel() const { return level; }

	virtual void attack() {};
};

class Ranged : public Player
{
private:
	unsigned id = 13;

public:
	Ranged(string n, string w, string a, unsigned l, unsigned _id)
		: Player(n, w, a, l), id(_id)
	{}

	Ranged operator+(const Ranged& other)
	{
		return Ranged(name, weapon, ability, level + other.level, id);
	}

	Ranged operator-(const Ranged& other)
	{
		return Ranged(name, weapon, ability, level - other.level, id);
	}

	void operator+=(const Ranged& other)
	{
		// not sure about this approach
		this->level += other.level;
	}

	void attack() override
	{
		cout << name + " is attcking" << '\n';
		level += 1;
	}
};


int main()
{
	Ranged a = Ranged("DOru", "Arbaleta", "Manevra", 13, 13024);
	Ranged b = Ranged("Vasilica", "Arcu", "Lovitura", 13, 12442);
	cout << a.getLevel() << '\n';
	a.attack();
	cout << a.getLevel() << '\n';
	a += b;
	cout << a.getLevel() << '\n';
}