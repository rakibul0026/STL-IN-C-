#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int q;
    cin >> q;

    while (q--)
    {
        int typ, x;
        cin >> typ >> x;

        if (typ == 1)s.insert(x);
        else if (typ == 2)s.erase(x);
        else{
            if(s.count(x)==1)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

    return 0;
}

