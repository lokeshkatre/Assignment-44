#include <iostream>
#include <set>
using namespace std;

int main()
{
    string name= "Lokeshkatre" ;
    set<char> setName(begin(name),end(name));  // or setName(name.begin(),name.end())
    for(auto x : setName)
    cout << x;

    cout << endl;

    set<char> set_name;
    for(auto i: name)
    {
        set_name.insert(i);
    }

    for(auto x : setName)
    {
        cout << x;
    }
   
}