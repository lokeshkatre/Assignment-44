#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,4};
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1 ;i++)
    {
        if(v[i]==v[i+1])
        {
            cout<<v[i] << " " << v[i]+1 <<endl;
            return 0;
        }
    }
    cout<<"no duplicate element present"<<endl;
}