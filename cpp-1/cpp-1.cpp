#include <iostream>
#include <string>


class Entity
{
public:
	void doSomehting()
	{
		std::cout << "fwierhfowe";
	}
};

class Ceapa : public Entity
{
};

int main()
{
	Ceapa c = Ceapa();
	c.doSomehting();
}