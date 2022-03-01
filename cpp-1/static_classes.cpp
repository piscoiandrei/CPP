#include <iostream>

class Entity
{

public:
	static int a_static;
private:
	// static data members are the same for all instances of a class
	// can think of them as 'class data members'
	static int x_static;
	int y;
public:
	// a static  method is a 'class method', it's not instance dependent
	// a static method can't access non-static data members
	static void Print()
	{
		// prints value of x_static
		std::cout << x_static;

		// throws an error:
		// std::cout << y;
	}
	static void setX(int x)
	{
		x_static = x;
	}

};

// Static data members must be defined outside the class
int Entity::x_static;
// (OPTIONAL) initialization
int Entity::a_static = 10;


int main()
{
	// Working with static methods and data members
	Entity::a_static = 13;
	Entity::setX(2);
	Entity::Print();
}