/*                                               Find the Frequency

Given an Array Arr of N positive integers and an integer X. Return the frequency of X in the array.

 

Example 1:

Input:
N = 5
Arr = {1, 1, 1, 1, 1}
X = 1
Output: 
5
Explanation: Frequency of 1 is 5.

Example 2:

Input:
N = 6
Arr = {1, 2, 3, 3, 2, 1}
X = 2
Output: 
2

 
*/

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> Arr, int X){
   map<long long,int>cnt;
   for(auto u:Arr)cnt[u]++;
   return cnt[X];
}

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> Arr;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        Arr.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int X;
	    cin >> X;
	    cout << findFrequency(Arr, X) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
