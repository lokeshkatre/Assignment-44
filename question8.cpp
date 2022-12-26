#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue<int, vector<int>, greater<int>> gq)
{
    priority_queue<int, vector<int>, greater<int>> g = gq;
    while (!g.empty())
    {
        cout << " " << g.top();
        g.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue<int> pq;
    int n;
    cout << "Enter no. of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    int p, q;
    while (1)
    {
        p = pq.top();
        pq.pop();
        q = pq.top();
        pq.pop();
        if (p != q)
        {
            pq.push(p-q);
            n--;
        }
        else
        {
            n--;
            n--;
        }
        if (n == 0 || n == 1)
            break;
    }
    if (n == 1)
        cout << pq.top();
    else
        cout << -1;
}