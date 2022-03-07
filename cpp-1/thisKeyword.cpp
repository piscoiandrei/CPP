// 'this' keyword is only accessible through a member function
// 'this' - pointer to the current obj instance


class Entity 
{
public:
	int x, y;
	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};