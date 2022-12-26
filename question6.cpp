#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    auto it = s.lower_bound(3);
    if (it != s.end())
    {
        cout << "\nThe lower bound of 3 is " << *it << endl;
    }
    else
        cout << "\nNumber is greater than max element of set" << endl;
}