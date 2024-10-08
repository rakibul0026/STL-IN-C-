/*                     C - Good Sequence  

Problem Statement
You are given a sequence of positive integers of length N, a=(a1,a2,...,aN). Your objective is to remove
some of the elements in a so that a will be a good sequence.
Here, an sequence b is a good sequence when the following condition holds true:

For each element x in b, the value x occurs exactly x times in b.
For example, (3,3,3), (4,2,4,1,4,2,4) and () (an empty sequence) are good sequences, while (3,3,3,3) and 
(2,4,1,4,2) are not.

Find the minimum number of elements that needs to be removed so that a will be a good sequence.

Input
Input is given from Standard Input in the following format:

N
a1  ​a2 ... aN
​
 
Output
Print the minimum number of elements that needs to be removed so that 
a will be a good sequence.

Sample Input 1
4
3 3 3 3

Sample Output 1
1
We can, for example, remove one occurrence of 3. Then, (3,3,3) is a good sequence.

Sample Input 2
5
2 4 1 4 2
Sample Output 2
2
We can, for example, remove two occurrences of 4. Then, (2,1,2) is a good sequence.

Sample Input 3
6
1 2 2 3 3 3
Sample Output 3
0
Sample Input 4
1
1000000000
Sample Output 4
1
Remove one occurrence of 10^9. Then, () is a good sequence.

Sample Input 5
Copy
8
2 7 1 8 2 8 1 8
Sample Output 5
5

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>cnt;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        cnt[a]++;
    }
    int ans=0;

    for(auto u: cnt){
        if(u.second>=u.first)ans+=(u.second-u.first);
        else ans+=u.second;

    }
    cout<<ans<<endl;

}
