#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// https://docs.microsoft.com/en-us/cpp/cpp/constructors-cpp?view=msvc-170

class Entity
{
private:
	int v1, v2;
public:
	// default autogenerated constructor
	Entity() {}
	// constructors can be overloaded
	Entity(int a, int b)
	{
		v1 = a;
		v2 = b;
	}
	// constructor with default values
	// ORDER: args, default_args
	Entity(int i, int j = 4, int k = 0)
	{

	}
};

// used to group related static methods
class OnlyStatic {

	// remove the constructor => no instances can be created 
private:
	// VARIANT 1
	// OnlyStatic() {}
public:
	// VARIANT 2
	OnlyStatic() = delete;
	static void foo1() {}
	static void foo2(int argc, char* argv[]) {}
};

// Fast way of initializing within constructors
class FastCstr
{
private:
	// init data members by default
	int i{ 0 }; // C++11 // assign 0 to i, equivalent to i = 0
	int j = 1;
public:
	/*
	FOR MEMBER INITIALIZER LISTS KEEP THE SAME ORDER AS THE
	ORDER IN WHICH THEY ARE DECLARED
	THEY ARE NOT INITIALIZED IN THE ORDER IN WHICH THEY ARE
	SPECIFIED IN THE MEMBER INITIALIZER LIST
	*/
	// In short, Member initialization list does not determine the order of initialization.
	FastCstr(int val) : i(val)
	{}
	FastCstr(int x, int y)
		: i(x), j(y)
	{}

	// COPY CONSTRUCTORS
	FastCstr(const FastCstr& obj)
	{
		i = obj.i;
		j = obj.j;
	}
private:
	std::vector<std::string> contents;
public:
	// MOVE CONSTRUCTOR
	// moves ownership of an existing object's data to a new variable without copying the original data
	// The compiler chooses a move constructor when the object
	// is initialized by another object of the same type,
	// if the other object is about to be destroyedand no longer needs its resources
	FastCstr(FastCstr&& other) : i(other.i), j(other.j)
	{
		contents = std::move(other.contents);
	}
};

int main()
{
	FastCstr f1{ 13 };
	FastCstr f2{ 9, 0 };
}