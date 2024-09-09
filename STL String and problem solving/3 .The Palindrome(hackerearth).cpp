/*Check whether the given string is palindrome or not? Use the following function signature.
palindrome(char *str, int n)
where n is the string length and str is the input string.
Constraints: 1 <= t <= 10 // number of test cases 1 <= n <= 100 str contains only the lowercase English alphabets.
Input and Output format: First line of input is the number of test cases t. Each test case contains a string. For 
each test case print Yes if the given string is a palindrome and No otherwise.

Sample Input
4
madam
ab
abba
a

Sample Output
Yes
No
Yes
Yes*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
       string s;
       cin>>s;
       string temp=s;
       reverse(temp.begin(),temp.end());

       if(temp==s){
        cout<<"Yes"<<endl;
       }else
       cout<<"No"<<endl;
    }
    
}
