#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main()
{
    // Sets are containers that store unique elements
    // Sets are immutable (objects inside can't be modified)
    set<int> s;

    // insert an element
    s.insert(194);

    // finding an elemnent, returns iterator towards element found
    // if element not found returns s.end()
    auto it = s.find(-1);
}