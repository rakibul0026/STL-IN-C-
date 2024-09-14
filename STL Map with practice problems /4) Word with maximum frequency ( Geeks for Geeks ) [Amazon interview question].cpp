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
