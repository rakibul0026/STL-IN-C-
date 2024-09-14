/*                                        Word with maximum frequency

You are given a string str that is made up of words separated by spaces. Your task is to find the word with the highest frequency, i.e. it
appears the most times in the sentence. If multiple words have maximum frequency, then print the word that occurs first in the sentence.

Examples:

Input: str = "the devil in the sky"
Output: the 2
Explanation: The frequency of "the" is 2, so we return "the" and its frequency "2" i.e., "the 2" 

Input: str = "this is not right"
Output: this 1
Explanation: Every word has the frequency of "1", so we return "this 1" as this occurs first in the sentence. */



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline ( cin, s );

    string tmp;
    vector < string > v;
    for( auto u : s){
        if( isspace(u) ){
            v.push_back( tmp );
            tmp.clear();
        }
        else tmp += u;
    }
    v.push_back( tmp );

    map < string, int > cnt;
    int maxFrq = 0;
    for( auto u : v ){
        cnt[u]++;
        maxFrq = max ( maxFrq, cnt[u] );
    }

    string ans;
    for( auto u :v ){
        if( cnt[u] == maxFrq ){
            ans = u;
            break;
        }
    }
    cout << ans << " " << maxFrq << endl;
}
