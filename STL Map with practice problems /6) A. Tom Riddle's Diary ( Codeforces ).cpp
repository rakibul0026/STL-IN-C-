/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    optimize();

    int n;
    cin >> n;

    map<string, bool> vis;

    while ( n-- ) {
        string s;
        cin >> s;
        if ( vis[s] == 1 ) cout << "YES\n";
        else cout << "NO\n";

        vis[s] = 1;
    }

}
