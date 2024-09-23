#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n); 
    priority_queue<int> q;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        if (q.size() >= 3)
        {
         
            int a1 = q.top();
            q.pop();
            int a2 = q.top();
            q.pop();
            int a3 = q.top();
            q.pop();

            int sum = a1 * a2 * a3;
            cout << sum << endl;

           
            q.push(a1);
            q.push(a2);
            q.push(a3);
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

