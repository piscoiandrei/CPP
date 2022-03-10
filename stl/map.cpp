#include <map>
using namespace std;


int main()
{
	map<int, int> m;
	// inserting an element
	m[1] = 100;
	m[492] = 4;

	auto it = m.find(492);
	m.erase(it);
}