//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    map<string, int> cnt;

    int countWords(string list[], int n) {
        int ans = 0;

        // Count the frequency of each word in the list
        for (int i = 0; i < n; i++) {
            cnt[list[i]]++;
        }

        // Count how many words appear exactly twice
        for (auto u : cnt) {
            if (u.second == 2) ans++;
        }

        return ans;
    }
};

   

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
