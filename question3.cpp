#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(6);
    set<int>::iterator it;
    set<int>::iterator it2;
    it=s.begin();
    it2=s.end();
    it2--;it2--;
    it++;
    s.erase(it,it2);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}