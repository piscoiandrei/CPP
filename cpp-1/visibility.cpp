class Entity
{
	// by default all members are private

// can only be accessed within the class or friends of that class
private:
	int v1, v2;

// can be accessed from this class and from subclasses
protected:
	int x1, x2;
// can be accessed from anywhere
public:
	int d1, d2;
};