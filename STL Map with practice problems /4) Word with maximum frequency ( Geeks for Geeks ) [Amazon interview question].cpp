#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline ( cin, s );

    string tmp;
    vector < string > v;
    for( auto i : s){
        if( isspace(i) ){
            v.push_back( tmp );
            tmp.clear();
        }
        else tmp += i;
    }
    v.push_back( tmp );

    map < string, int > m;
    int maxFrq = 0;
    for( auto i : v ){
        m[i]++;
        maxFrq = max ( maxFrq, m[i] );
    }

    string ans;
    for( auto i : m){
        if( i.second == maxFrq ){
            ans = i.first;
            break;
        }
    }
    cout << ans << " " << maxFrq << endl;
}
