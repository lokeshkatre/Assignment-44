#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    if (s.find(5) != s.end())
        cout << "5 is present" << endl;
    else
        cout << "5 is not present" << endl;
}