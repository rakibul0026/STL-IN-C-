/*T                                             wice Counter

Given a list of N words. Count the number of words that appear exactly twice in the list.

Example 1:

Input:
N = 3
list = {Geeks, For, Geeks}

Output: 1
Explanation: 'Geeks' is the only word that 
appears twice. 
Example 2:

Input:
N = 8
list = {Tom, Jerry, Thomas, Tom, Jerry, 
Courage, Tom, Courage}

Output: 2
Explanation: 'Jerry' and 'Courage' are the 
only words that appears twice. */



#include <bits/stdc++.h>
using namespace std;

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
