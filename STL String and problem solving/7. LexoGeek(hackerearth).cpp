/*Problem
Lexicographical order is often known as alphabetical order when dealing with strings.

It is similar to the order in which strings are arranged in a dictionary. A string is greater than another string if it comes later
in a lexicographically sorted list.

Gaurav has a simple problem for which he needs your help. 

Given a word, create a new word by swapping some or all of its characters. This new word must meet two criteria:

It must be greater than the original word
 It must be the smallest word that meets the first condition
For example, given the word w=abcd, the next largest word is w=abdc.

Basically, Gaurav needs to find the smallest string which is lexographically greater than the given string using the 
same characters present in the input string.

 

Input Format:

The first line of input contains ,T the number of test cases.
Each of the next T lines contains a string w.
Constraints:

1<=T<=10^5
1<=|w|<=100
string w will contain only letters in the range ascii[a..z].

Output Format: 

For each test case, output the string meeting the criteria. If no answer exists, print no answer.

Sample Input
3
abcd
adeg
dcba

Sample Output
abdc
adge
no answer
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>>s;
        if(next_permutation(s.begin(),s.end())){
            cout<<s<<endl;
        }
        else
        cout<<"no answer";
    }


}
