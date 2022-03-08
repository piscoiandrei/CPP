#include <iostream>
#include <string>

// CONST IN CLASSES

class Entity
{
private:
	int mx;
	int* my;
	// mutable variables can be modified within const methods
	mutable int m;
public:
	// this method is not going to modify any of the actual class members
	int GetX() const
	{
		// ERROR (modifying non-mutable variable):
		//mx = 12;

		// modifying mutable variable
		m = 124;

		return mx;
	}
	// returning a pointer that can't be modified, neither it's contents
	const int* const GetY() const
	{
		return my;
	}
};


int main()
{
	// can't modify the value of MAX_AGE
	const int MAX_AGE = 120;

	// can't modify the contents of the pointer
	const int* a = new int;
	//int const  <==> const int
	//ERROR:
	//*a = 32;
	//WORKS:
	int rand_var = 13;
	a = &rand_var;

	// can't modify what address the pointer points to
	int* const b = new int;
	//WORKS:
	*b = 1324;
	//ERROR:
	//b = &rand_var;
}