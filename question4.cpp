#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    if (s.empty())
        cout << "set is empty" << endl;

    s.insert(3);
    s.insert(1);
    s.insert(33);
    s.insert(5);
    s.insert(7);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}