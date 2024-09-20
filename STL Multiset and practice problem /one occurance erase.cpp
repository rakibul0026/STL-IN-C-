#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);
    
    auto it=s.find(1);
    s.erase(it);

    for(auto u:s)cout<<u<<" ";
    cout<<endl;
}
