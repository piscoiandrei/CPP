#include <iostream>
#include <string>
using namespace std;

typedef pair<unsigned, unsigned> upair;

class Entity
{
public:
	virtual string getName() const = 0;
	virtual upair getPos() const = 0;
	virtual void setName(string s) = 0;
	virtual void setPos(upair u) = 0;
};

class Person : public Entity
{
protected:
	string gender;
	string name;
	upair pos;
	Person(string n, upair p, string g)
		: name(n), pos(p), gender(g)
	{}
public:
	string getName() const override { return name; }
	upair getPos() const override { return pos; }
	void setName(string s) override { name = s; }
	void setPos(upair u) override { pos = u; }

	string getGender() const { return gender; }
	void setGender(string g) { gender = g; }
};

class Employee : public Person
{
protected:
	unsigned salary;
public:
	Employee(string n, upair p, string g, unsigned s)
		: Person(n, p, g), salary(s)
	{}

};

class Shape : public Entity
{

};


int main()
{

}