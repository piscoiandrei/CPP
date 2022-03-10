#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = { 1, 3, 4, -1, 3, -13 };
    A[1] = 13;
    cout << A[1];

    //Sorting
    sort(A.begin(), A.end()); // stl sort: O(NlogN)
    // descending sort
    sort(A.begin(), A.end(), greater<int>());
    // custom sorting
    sort(A.begin(), A.end(), cmp);

    // Binary search - returns true if element is found
    bool is_there = binary_search(A.begin(), A.end(), 3);

    // Insert an element
    A.push_back(100);

    int x = 100;
    // O(logN) if the vector is sorted
    // Get first occurence of an element >= x
    vector<int>::iterator lb = lower_bound(A.begin(), A.end(), x);
    // Get first occurence of an element > x
    vector<int>::iterator ub = upper_bound(A.begin(), A.end(), x);

    int occurences = ub - lb; // how many times x occurs in vector A

}