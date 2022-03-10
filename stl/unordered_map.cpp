#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;


int main()
{
	//           key , value
	unordered_map<int, char> umap = { {1, 'k'}, {2, 'f'}, {3, 'c'} };

	// update
	umap[3] = '!';


	// iterate
	for (auto& elm : umap) {
		cout << elm.first << elm.second << '\n';
	}

	// find element
	auto result = umap.find(2);
	// if elem not found
	if (result != umap.end())
		cout << result->first << result->second << '\n';
}