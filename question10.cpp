#include<iostream>
#include<queue>
using namespace std;
int smallest_subsequence(vector<int> v, int k)
{
    priority_queue<int> pq;
    for(int i=0;i<v.size();i++)
    {
        pq.push(v[i]);
    }
    int count=0, sum=0;
    while(!pq.empty() && sum < k)
    {
        sum=sum+pq.top();
        pq.pop();
        count++;
    }
    if(sum<k)
    {
        return -1;
    }
    else
     return count;
}
int main()
{
    vector<int> v={2,3,1,5,6,3,7,9,14,10,2,5};
    int k=35;
    cout<<smallest_subsequence(v,k);
}