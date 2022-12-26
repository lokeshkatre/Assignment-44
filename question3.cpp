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
    pq.push(10);
    pq.push(30);
    pq.push(9);
    pq.push(1);
    pq.push(32);
    pq.push(11);

    cout<<"The priority queue is : ";
    showpq(pq);

    cout<<"\npq size : "<<pq.size()<<endl;
    cout<<"\npq  top : "<<pq.top() << endl;

    cout<<"\npq pop : " ;
    pq.pop();
    showpq(pq);
}