/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    optimize();

    int n;
    cin >> n;

    map<string, int> cnt;

    while ( n-- ) {
        string s;
        cin >> s;

        if ( cnt[s] == 0 ) cout << "OK\n";
        else cout << s << cnt[s] << endl;

        cnt[s]++;
    }

}
