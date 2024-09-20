#include<bits/stdc++.h>
using namespace std;


int main()
{
    set<int> s;
    int n;
    cin >> n;

    int p;
    cin >> p;
    for ( int i = 0; i < p; i++ ) {
        int a;
        cin >> a;
        s.insert ( a );
    }

    
    cin >> p;
    for ( int i = 0; i < p; i++ ) {
        int a;
        cin >> a;
        s.insert ( a );
    }

    if ( s.size () == n ) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}
