#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    auto it = s.upper_bound(3);
    if (it != s.end())
    {
        cout << "\nThe upper bound of 3 is " << *it << endl;
    }
    else
        cout << "\nNumber is greater than max element of set" << endl;
}