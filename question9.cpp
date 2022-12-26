#include <iostream>
#include <queue>
#include<algorithm>
using namespace std;

int no_of_triplet(int X[],int Y[],int Z[],int n)
{
    priority_queue<int,vector<int>,greater<int>> y;
    priority_queue<int,vector<int>,greater<int>> z;
    int ans=0;
    sort(X,X+n);
    for(int i=0; i<n ;i++)
    {
        y.push(Y[i]);
        z.push(Z[i]);
    }

    for(int i=0; i<n ;i++)
    {
        int x=X[i];

        while(!y.empty() && y.top()<=x)
        y.pop();
        if(y.empty())
        break;
        int p=y.top();
        y.pop();

        while(!z.empty() && z.top()<=p)
        z.pop();
        if(z.empty())
        break;
        z.pop();

        ans++;
    }
    return ans;
}
int main()
{
    int X[] = {9, 6, 14, 1, 8};
    int Y[] = {2, 10, 3, 12, 11};
    int Z[] = {15, 13, 5, 7, 4};
    int n=sizeof(X)/sizeof(int);
    cout << "max no. of tripletes are "<<no_of_triplet(X,Y,Z,n);
}