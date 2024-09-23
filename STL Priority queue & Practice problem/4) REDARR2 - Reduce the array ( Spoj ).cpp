#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        long long sum = 0; 

       
        priority_queue<int, vector<int>, greater<int>> q;
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }

        while (q.size() > 1)
        {
           
            int a1 = q.top();
            q.pop();
            
            int a2 = q.top();
            q.pop();
            
           
            int new_sum = a1 + a2;
            sum += new_sum;
            
            
            q.push(new_sum);
        }

        cout << sum << endl;
    }

    return 0;
}

