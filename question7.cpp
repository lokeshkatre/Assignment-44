#include<iostream>
#include<queue>
using namespace std;

void showpq(priority_queue<int,vector<int>,greater<int>> gq)
{
    priority_queue<int,vector<int>,greater<int>> g = gq;
    while(!g.empty())
    {
        cout<< " " << g.top();
        g.pop();
    }
    cout<<endl;
}
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int A[]={5,6,8};
    int B[]={4,7,8};
    int n=sizeof(A)/sizeof(int);
    int m=sizeof(B)/sizeof(int);
    int C[n+m];
    for(int i=0;i<(n+m);i++)
    {
        if(i<n)
        pq.push(A[i]);
        else
        pq.push(B[i-n]);
    }
    for(int i=0 ; i<n+m ;i++)
    {
        C[i]=pq.top();
        pq.pop();
        cout<<C[i]<<" ";
    }
};