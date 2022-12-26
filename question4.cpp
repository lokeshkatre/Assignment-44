#include<iostream>
#include<queue>
using namespace std;

void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while(!g.empty())
    {
        cout<< " " << g.top();
        g.pop();
    }
    cout<<endl;
}
int main()
{
    priority_queue<int> pq;
    priority_queue<int> pq2;
    pq.push(10);
    pq.push(30);
    pq2.push(9);
    pq2.push(1);
    pq2.push(32);
    pq2.push(11);

    cout<<"The priority queue1 is : ";
    showpq(pq);
    cout<<"The priority queue2 is : ";
    showpq(pq2);
    
    pq.swap(pq2);
    cout<<"After swapping "<<endl;
    cout<<"The priority queue1 is : ";
    showpq(pq);
    cout<<"The priority queue2 is : ";
    showpq(pq2);

   
}