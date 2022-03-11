#include <iostream>
#include <cstring>

class String
{
private:
	char* mBuffer;
	unsigned mSize;

public:
	String(const char* s)
	{
		mSize = strlen(s);
		mBuffer = new char[mSize + 1];
		strcpy(mBuffer, s);
	}
	String(const String& other)
		:mSize(other.mSize)
	{
		mBuffer = new char[mSize + 1];
		strcpy(mBuffer, other.mBuffer);
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& other);

	char& operator[](unsigned index)
	{
		return mBuffer[index];
	}

	~String()
	{
		delete[] mBuffer;
	}
};

std::ostream& operator<<(std::ostream& stream, const String& other)
{
	std::cout << other.mBuffer;
	return stream;
}


int main()
{
	String st = "First";
	String nd = st;
	std::cout << st << '\n';
	std::cout << nd << '\n';


}
