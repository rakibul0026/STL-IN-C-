#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1, p2;

    p1 = {8, 3};
    p2 = {1, 1};

    pair<int, int> p = min(p1, p2);
    
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
